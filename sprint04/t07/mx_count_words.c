//#include <stdio.h>
int mx_count_words(const char *str, char delimiter){
int count = 0;
int i = 0;
if (str[0] == delimiter){
count--;}
if (str[0] != delimiter){
 count++;}
for (i = 0; str[i] != '\0'; i++){
if (str[i] == delimiter)
count++;
}
return count;
}
/*
int main() 
{
printf("%d\n",mx_count_words(" follow * the white rabbit ",'*'));
}
*/
