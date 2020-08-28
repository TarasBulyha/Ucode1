#include <stdbool.h>
//#include <stdio.h>
bool mx_multiple_number(int n, int mult){
    if (mult%n == 0)
    return true;
    else return false;
}
/*
int main(){
    mx_multiple_number(6, 10);
    printf("%d",mx_multiple_number(6, 10));
}
*/
