#include "header.h"

int count_lines(const char *str) {
    int res = 0;
    char delimeter = '\n';

    if (str && str[0] && str[0] != delimeter)
        res++;
    for (int i = 0; str && str[i + 1]; ++i) {
        if (str[i] == delimeter)
            ++res;
    }
    return res;
}

int count_words(const char *str) {
    int res = 0;

    if (str && str[0] && !mx_isspace(str[0]))
        res++;
    for (int i = 0; str && str[i + 1]; ++i) {
        if (mx_isspace(str[i]) && !mx_isspace(str[i + 1]))
            ++res;
    }
    return res;
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

void report_error(char *filename) {
    const char error[] = ": No such file or directory\n";

    mx_printerr("mx_wc: ");
    mx_printerr(filename);
    mx_printerr(error);
}

void print_wc(t_wc data) {
    mx_printchar('\t');
    mx_printint(data.lines);
    mx_printchar('\t');
    mx_printint(data.words);
    mx_printchar('\t');
    mx_printint(data.bytes);
    if (data.name) {
        mx_printchar('\t');
        mx_printstr(data.name);
    }
    mx_printchar('\n');
}

t_wc count_wc(char *str, char *filename) {
    t_wc data;

    data.lines = count_lines(str);
    data.words = count_words(str);
    data.bytes = mx_strlen(str);
    data.name = filename ? filename : NULL;
    return data;
}

t_wc count_from_file(char *filename) {
    int fd = open(filename, O_RDONLY);
    char *str = NULL;
    t_wc result = {0, 0, 0, NULL};

    if (fd == -1) {
        report_error(filename);
    }
    else {    
        str = mx_file_to_str(filename);
        result = count_wc(str, filename);
        print_wc(result);
    }
    close(fd);
    return result;
}

void mx_input_wc() {
    char buffer = 0;
    char *str = NULL;
    int len = 1;

    while (read(0, &buffer, 1) > 0) {
        char *tmp = mx_strnew(len);

        tmp = mx_strcpy(tmp, str);
        tmp[len - 1] = buffer;
        free(str);
        str = tmp;
        ++len;
    }
    print_wc(count_wc(str, NULL));
}
