#include <stdlib.h>
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst,const char *src);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);

char *mx_concat_words(char **words){
   char *r = "";
   int i;
   for (i = 0; words[i] != NULL; i++){
       r = mx_strjoin(r,words[i-1]);
       r = mx_strjoin(r," ");
   } 
    if (words[i] == NULL){
        r = mx_strjoin(r, words[i-1]);
    }
    return r;
    mx_strdel(&r);
}

// #include <stdio.h>
// int main(){
//     char *words[] = {"Free","your","mind.",NULL};
//     printf("%s\n",mx_concat_words(words));
// }
