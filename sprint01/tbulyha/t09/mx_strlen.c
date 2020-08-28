#include <stdio.h>
int len = 0;
int mx_strlen(const char *s){
        while (s[len]) {
                len++;
        }
        return len;

}

/*
int main(){
	mx_strlen("qwerty");
	printf("%d", len);
	return 0 ;
}
*/
