//#include <stdio.h>
int mx_strlen(const char *s);
void mx_swap_char(char *s1,char *s2);
void mx_str_reverse(char *s)
{
int counter, c;
char *begin, *end;
begin = s;
end = s;
counter = mx_strlen( s);
for (c = 0; c < (counter - 1 ) ; c++)
    end ++;
for (c = 0; c < counter/2; c++)
{
mx_swap_char(begin,end);
begin++;
end--;
}
}
/*
int main()
{
char s[]= "Hello world";
mx_str_reverse(s);
printf("%s\n",s);
}
*/

