#include <stdlib.h>

char *mx_strchr(const char *s, int c) {
    int i = 0;

    while (s[i]) {
        if(s[i] == c)
            return (char *)s + i;
        i++;
    }
    return NULL;
}
