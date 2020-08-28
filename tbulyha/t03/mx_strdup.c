#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    char *dst = NULL;
    char *pointer;
    int len;

    len = mx_strlen(str);
    dst = mx_strnew(len);
    pointer = mx_strcpy(dst, str);
    return pointer;
}
