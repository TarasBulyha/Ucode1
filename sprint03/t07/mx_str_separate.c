void mx_printchar(char c);
void mx_str_separate(const char *str, char delim){
int i = 0;
while (str[i])
{
 if(str[i] == delim){
    i++;
   continue; }
    if(str[i-1] == delim){
    mx_printchar('\n');
     }
    mx_printchar(str[i]);
    i++;
}
}
/*
int main()
{
    const char str[] = "MMMatrix";
    char denim = 'M';
    mx_str_separate(str,denim);
    return 0;
}
*/
