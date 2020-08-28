//#include <stdio.h>

int mx_strlen(const char *s) {
 int counter = 0;
	while(*s != '\0' ) {
		s++;
		counter++;
	}
	return counter;
}
/*
int main() {
	char string[] = "Hello 123";

	printf("%d", mx_strlen(string));
}
*/
