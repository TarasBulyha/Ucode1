#include <stdio.h>
int mx_strlen(const char *s);
char *mx_strstr(const char *s1, const char *s2);
int mx_count_substr(const char *str, const char *sub) {
    int i = 0;
    const char *b = str;
    if (mx_strlen(sub) == 0 || mx_strlen(str) == 0)
        return 0;
    while ((b = mx_strstr(b, sub)) != 0) {
        b++;
        i++;
    }
    return i;
}
/*
int main(){
const char *str = "yo yo yo Neo";
const char *sub = "yo";
printf("%d\n",mx_count_substr(str, sub));
}
*/
