void mx_printchar (char c);
void mx_cube(int n){
if (n < 2)
return;

int mx_x = n * 2 + n / 2 + 3;
int mx_y = n + n / 2 + 3;
int x = 0;
int y = 0;
int d = (n / 2 + 1);

for (y = 0; y < mx_y; y++){
    int x = 0;
    if (y >= n + 2)
        mx_x--;
        // first part
    for(; x < mx_x; x++) {
        if ((y == 0 && x == mx_x - n * 2 -2) || (y == 0 && x == mx_x - 1))
        mx_printchar('+');
    else if (y == 0 && x > n / 2 + 1 && x < mx_x)
        mx_printchar('-');
    else if (y > 0 && y <= n / 2 && ((x == n / 2 + 1 -y) || (x == mx_x - 1 - y )))
        mx_printchar('/');  
    else if ((y == d && x == mx_x -1) || (y != 0 && y < d && x == mx_x - 1 ))
        mx_printchar('|');  
        // second part
    else if ((y ==d && x == 0) || (y == d && x == n *  2 + 1))
        mx_printchar('+');
    else if ((y == d && x > 0 && x < n * 2 + 1 ))
        mx_printchar('-') ;
    else if ((y > d && y < n + 1 && x == mx_x -1 ))           
        mx_printchar('|');
    else if (y == n + 1 && x == mx_x - 1)
    mx_printchar('+');
    else if (( y > d && y < (mx_y -1) && x == 0) ||(y > d && y < (mx_y - 1) &&x == n*2 +1)) 
        mx_printchar('|');
    else if (y > n && y <(mx_y - 1)&& x ==mx_x - 1)
        mx_printchar('/');
    else if ((y == mx_y - 1 && x==0) || (y == mx_y - 1 && x == n * 2 +  1))
        mx_printchar('+');
    else if ((y == mx_y - 1 && x > 0 && x < n * 2 + 1))
        mx_printchar('-');
    else 
        mx_printchar(' ');
        }
mx_printchar('\n');

    }   
}

int main(){
    mx_cube(2);
}