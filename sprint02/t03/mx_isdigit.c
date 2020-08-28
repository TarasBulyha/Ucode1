#include <stdbool.h>
#include <stdio.h>

bool mx_isdigit(int c){
    if (c > 47 && c < 58)
    return true;
    else return false;
}
/*
int main(){
printf("%d",mx_isdigit('0'));
}
*/
