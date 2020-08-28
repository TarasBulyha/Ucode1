#include "mx_printchar.c"
/*  
void mx_hexadecimal(void);

int main() {
       mx_hexadecimal();
 }
*/
void mx_hexadecimal(void) {
        for (char a = 0x30; a < 0x47; a++){
        mx_printchar(a);
        write(1, "\n", 1);
        }
}
                   
