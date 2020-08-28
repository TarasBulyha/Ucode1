#include <stdio.h>
const char *mx_strchr(const char *s, int c){

while (*s){
	if (*s == c){
	return s;}
	s++;
}
return 0;
}
/*
int main (){
const char str[] = "Follow";
printf("%s\n",mx_strchr(str,'o'));
}
*/



