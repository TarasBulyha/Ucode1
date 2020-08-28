#include <stdio.h>
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

int main(int argc, const char *argv[]){
    if (argc < 2)
        return 0;
    int i = 1;
    while (argv[i]){
    mx_printstr(argv[i]);
    i++;
    }
}