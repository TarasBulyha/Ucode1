#include <stdbool.h>
#include <stdlib.h>
bool mx_isspace(char c);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);


static char *mx_spacedel(char *newstr, const char *str) {
    int j = 0;
    int size = mx_strlen(str);
    for (int i = 0; i < size; i++) {
        if (mx_isspace(str[i])) {
            while(mx_isspace(str[i+1]))
                i++;
        }
        newstr[j] = str[i];
        j++;
    }
    return newstr;
}

char *mx_del_extra_spaces(const char *str) {
    char *trims = NULL;
    char *news = NULL;
    int size;

    if (str == NULL)
        return NULL;
    trims = mx_strtrim(str);
    size = mx_strlen(trims);
    news = mx_strnew(size);
    mx_spacedel(news, trims);  
    return news;   
    mx_strdel(&trims); 
    mx_strdel(&news); 
}






