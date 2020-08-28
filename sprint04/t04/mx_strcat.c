#include <stdio.h>
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2){
int l1 = mx_strlen(s1);
int l2 = mx_strlen(s2);
int i, j = 0;
	for (int i = l1; i < l1 + l2; i++){
	s1[i]= s2[j];
	j++;
	}
	return s1;
	}
/*
int main()
{
char s1[] = "Follow";
char s2[] = " wsgdfasdf ";
printf("%s\n", mx_strcat(s1,s2));
}
*/
