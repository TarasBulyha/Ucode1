#include <stdbool.h>
//#include <stdio.h>

bool mx_is_prime(int num) {
   int i, d = 0;
   for (i = 2; i <= num / 2; i++){
        if (num % i ==0){
            d =1;
            break;
        }
   }
   if (num == 1){
    return false;
    }
    else {
        if (d == 0)
        return true;
        else return false;
    }

}

/*
int main(){
    printf("%d\n", mx_is_prime(13));

}
*/
