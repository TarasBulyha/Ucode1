#include <stdbool.h>
//#include <stdio.h>

int mx_tolower(int c){
    if (c > 64 && c< 91)
    return c+=32;
    else return c;
}
/*
int main(){
printf("%c",mx_tolower('Z'));
}
*/
