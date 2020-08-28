#include "header.h"

void report_error(bool is_error) {
    const char usage[] = "usage: ./parse_agents [-p | -s | -n] [file_name]\n";
    const char error[] = "error\n";

    mx_printerr(is_error ? error : usage);
    exit(1);
}

void mx_check_args(int argc, char **argv) {
    int fd;

    if (argc != 3)
        report_error(false);
    if (!argv[1] || mx_strlen(argv[1]) != 2)
        report_error(false);
    if (argv[1][0] != '-' || !(argv[1][1] == 'n'
        || argv[1][1] == 'p' || argv[1][1] == 's'))
        report_error(false);
    fd = open(argv[2], O_RDONLY);
    if (fd == -1)
        report_error(true);
    close(fd);
}

enum e_mode get_mode(char *str) {
    switch(str[1]) {
        case 'n':
            return NAME;
            break;
        case 'p':
            return POWER;
            break;
        case 's':
            return STRENGTH;
            break;
        default:
            return DEFAULT;
    }
}

int file_length(const char *filename) {
    int fd = open(filename, O_RDONLY);
    int len = 0;
    char buffer = 0;

    if (fd < 0)
        return -1;
    while (read(fd, &buffer, 1))
        ++len;
    close(fd);
    return len;
}

char *mx_file_to_str(const char *filename) {
    char *str = NULL;
    int length = file_length(filename);
    int fd = open(filename, O_RDONLY);

    if (fd == -1)
        return NULL;
    str = mx_strnew(length);
    if (str == NULL) {
        close(fd);
        return NULL;
    }
    if (read(fd, str, length) != length) {
        free(str);
        str = NULL;
    }
    close(fd);
    return str;
}

char *next_word(char **strp, char **tmp) {
    int len = 0;
    char *str = (NULL == strp) ? NULL : *strp;

    free(*tmp);
    while (str && str[len] && !mx_isspace(str[len]))
        ++len;
    *tmp = mx_strnew(len);
    if (NULL == *tmp)
        report_error(true);
    *tmp = mx_strncpy(*tmp, str, len);
    while (str[len] && mx_isspace(str[len]))
        len++;
    *strp += len;
    return *tmp;
}

void check_word(const char *s1, const char *s2) {
    if (!s1 || !s2 || mx_strcmp(s1, s2) != 0)
        report_error(true);
}

t_agent *next_agent(char **strp) {
    t_agent *agent = (t_agent *)malloc(sizeof(t_agent));
    char *tmp = mx_strnew(0);

    if (NULL == agent)
        return NULL;
    check_word(next_word(strp, &tmp), "agent");
    check_word(next_word(strp, &tmp), "{");
    check_word(next_word(strp, &tmp), "name:");
    next_word(strp, &tmp);
    agent->name = mx_strdup(tmp);
    check_word(next_word(strp, &tmp), "power:");
    next_word(strp, &tmp);
    agent->power = mx_atoi(tmp);
    check_word(next_word(strp, &tmp), "strength:");
    next_word(strp, &tmp);
    agent->strength = mx_atoi(tmp);
    check_word(next_word(strp, &tmp), "}");
    free(tmp);
    return agent;
}

void add_agent(t_agent *agent, t_agent ***agents, int size) {
    t_agent **arr = (t_agent **)malloc((1 + size) * sizeof(t_agent *));

    if (!arr)
        return;
    for (int i = 0; i < size; ++i)
        arr[i] = (*agents)[i];
    arr[size] = agent;
    free(*agents);
    *agents = arr;
}

t_agent **parse_agents(char *filename) {
    char *str = mx_file_to_str(filename);
    t_agent **agents = NULL;
    char *cur = str;
    int size = 0;

    if (!str)
        report_error(true);
    while (cur && mx_strlen(cur) > 0) {
        t_agent *new_agent = next_agent(&cur);

        if (new_agent) {
            add_agent(new_agent, &agents, size);
            ++size;
        }
    }
    add_agent(NULL, &agents, size);
    free(str);
    return agents;
}

void print_agents(t_agent **agents) {
    for (int i = 0; agents[i]; ++i) {
        mx_printstr("agent: ");
        mx_printstr(agents[i]->name);
        mx_printstr(", power: ");
        mx_printint(agents[i]->power);
        mx_printstr(", strength: ");
        mx_printint(agents[i]->strength);
        mx_printstr("\n");
    }
}

void delete_agents(t_agent **agents) {
    for (int i = 0; agents[i]; ++i) {
        free(agents[i]->name);
        free(agents[i]);
    }
    free(agents);
}
