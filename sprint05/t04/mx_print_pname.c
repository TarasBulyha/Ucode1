void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
int main(int argc, char *argv[]) {
    if (argc < 1)
        return 0;
    char *s = argv[0];
    while (mx_strchr(s, '/') != 0) {
        *s = *mx_strchr(s, '/');
        s++;
    }
    mx_printstr(s);
    mx_printchar('\n');
    return 0;
}
