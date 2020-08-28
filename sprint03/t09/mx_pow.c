//#include <stdio.h>

double mx_pow(double n, unsigned int pow)
{
int a = 1;
for (unsigned int i = 0; i < pow;i++)
a = a * n;

return a;}
/*
int main(){

printf("%f\n", mx_pow(1,3));
}
*/

