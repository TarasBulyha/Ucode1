#include "header.h"
 
char *mx_strncpy(char *dst, const char *src, int len) {
    int i;
    for (i = 0; i < len && src && src[i]; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}
