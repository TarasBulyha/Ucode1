#include <stdio.h>
//#include <unistd.h>
#include <stdbool.h>

bool mx_isupper(int x);
bool mx_islowe(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s)
{
    int i = 0;
    while(s[i]){
    if (mx_isupper(s[i]))
        s[i] = mx_tolower(s[i]);
    else
        s[i] = mx_toupper(s[i]);
        i++;
    }
}
/*
int main()
{
char str[] = "Hello Neo";
mx_reverse_case(str);
printf("%s\n", str);
return 0;
}
*/
