#include <stdio.h>

void mx_printchar (char c);
void mx_pyramid(int n) {

if (n < 2)
return;

int mx_x = n - 1 ;
int mx_y = n;
int x = 0;
int y = 0;


for (y = 0; y < mx_y; y++){
    int x = 0;
    // int mx_x = n;
    if (y <= n / 2 - 1 )
        mx_x+=2;
    if (y == n / 2)
        mx_x++;
        for(; x < mx_x; x++){
            if (y >= 0 && y < mx_y && x == n -1 -y)
        mx_printchar('/');
        else if ((y >= 0 && y < n / 2  && x == mx_x - 1 ))           
        mx_printchar('\\');
        else if ((y >= 1 && y < n   && x == n + y - 1 ))           
        mx_printchar('\\');
        else if ((y == mx_y - 1 && x > 0 && x < n * 2 - 2))
        mx_printchar('_');
        else if ((y >= n / 2 && y <= mx_y  && x == mx_x - 1 ))
        mx_printchar('|');
        else 
        mx_printchar(' ');
        }
        mx_printchar('\n');
}
}







int main(){
    int n;
    scanf("%d", &n);
    mx_pyramid(n);
}