#include "mx_strlen.c"
#include <unistd.h>
/*
void mx_printstr(const char *s);

int main() {

	mx_printstr("Hello");
}
*/
void mx_printstr(const char *s){
	mx_strlen(s);
	write(1,s,len);

}	
