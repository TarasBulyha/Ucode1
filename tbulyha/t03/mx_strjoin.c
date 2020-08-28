#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strjoin(char const *s1, char const *s2) {
    char *result;
    int result_size;
    if (s1 == NULL && s2 == NULL) {
        return NULL;
    } else if (s1 == NULL || s2 == NULL) {
        result = (s1 == NULL) ? mx_strdup(s2) : mx_strdup(s1);
    } else {
        result_size = mx_strlen(s1) + mx_strlen(s2);
        result = mx_strnew(result_size);
        mx_strcpy(result, s1);
        mx_strcat(result, s2);
    }
    return result;
}

    
// #include <stdio.h>
// int main(){
//     char str1[] = "this";
//     char str2[] = "dodge";
//     void *str3 = NULL;
//     printf("%s\n", mx_strjoin(str2, str3));
// }
