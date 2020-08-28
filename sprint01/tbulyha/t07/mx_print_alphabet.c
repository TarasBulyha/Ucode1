#include "mx_printchar.c"
/*  
void mx_print_alphabet(void);

int main() {
       mx_print_alphabet();
 }
*/
void mx_print_alphabet(void) {
        for (char a = 65 ; a < 91 ; a++){
        mx_printchar(a);
        a++;
	mx_printchar(a + 32);
       	
	 }
}
