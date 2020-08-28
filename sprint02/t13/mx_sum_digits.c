//#include <stdio.h>
int mx_sum_digits(int num) {
    if (num < 0)
    num = - num;
    else num = num;
    int  sum, rem;
    while(num != 0) {
    rem = num % 10;
    sum +=rem;
    num = num/10;
    }
    return sum;
}
/*
int main(){
printf("%d",mx_sum_digits(-323));
}
*/
