#include <unistd.h>
/*
void mx_matrix_voice(void);
int main() {
      mx_matrix_voice();
}
*/

void mx_matrix_voice(void){
        char textt = 7; 
	write(1,&textt,1);       
}

