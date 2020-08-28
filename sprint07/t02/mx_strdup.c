#include <stdlib.h>

char *mx_strnew(const int size);
char *mx_strcpy(char *dst,const char *src);
int mx_strlen(const char *s);

char *mx_strdup(const char *str) {
    char *dst = mx_strnew(mx_strlen (str));  
    if (dst == NULL) return NULL;          
    mx_strcpy(dst, str);                      
    return dst;                            
}
// #include <stdio.h>
// int main(){
// const char str[] = "reQWCGS342523452";
// char *dst = mx_strdup(str);
// printf("%s\n",dst);

// }
