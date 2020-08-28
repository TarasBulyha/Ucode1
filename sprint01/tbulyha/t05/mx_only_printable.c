#include "mx_printchar.c"
/*
void mx_only_printable(void);
int main() {
       mx_only_printable();
 }
*/
void mx_only_printable(void){
	for (int a=127; a>31; a--){
	mx_printchar(a);
        write(1,"\n",1);
	}	
}
