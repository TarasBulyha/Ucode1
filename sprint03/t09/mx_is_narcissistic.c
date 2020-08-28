#include <stdbool.h>
//#include <stdio.h>
double mx_pow(double n, unsigned int pow);
bool mx_is_narcissistic(int num){
int count=0; int rem, sum = 0, temp, store;
temp = num;
store = num;
while (num != 0){
num = num/10;
count ++;
}
while (store != 0){
rem = store % 10;
sum = sum + mx_pow(rem,count);
store = store / 10;
}
if (sum == temp)
 return 1;
else return 0;
}
/*
int main(){
printf("%d\n",mx_is_narcissistic(153));
}
*/
