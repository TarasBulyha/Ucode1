#include <stdbool.h>
#include <stdlib.h>
bool mx_isspace(char c);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char *mx_strtrim(const char *str) {
    int len = mx_strlen(str);
    int start_str = 0;
    int last = 0;
    char *res;

    if (!str)
    	return NULL;
        for (int i = 0; mx_isspace(str[i]); ++i) {
            start_str++;
        }
        for(int j = len - 1 ; mx_isspace(str[j]); --j) {
            last++;
        }
        res = mx_strnew(len - start_str - last);
        mx_strcpy(res, str + start_str , len - start_str - last);
        return res;
        mx_strdel(&res);
}
