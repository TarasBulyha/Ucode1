#include "file_to_str.h"

char *mx_strjoin(const char *s1, const char *s2) {
    char *str = NULL;

    if (s1 && s2) {
        str = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
        return str ? mx_strcat(mx_strcat(str, s1), s2) : NULL;
    }
    return s1 || s2 ? (s1 ? mx_strdup(s1) : mx_strdup(s2)) : NULL;
}
