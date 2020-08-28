#include <stdbool.h>
//#include <stdio.h>
bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);
bool mx_is_mersenne(int n)
{
int mersenneprime = 0;
bool ismersenne = false;
for (int i= 2; mersenneprime <= n && !ismersenne;i++){
mersenneprime = ((int)mx_pow(2, i)-1);
ismersenne = (mersenneprime == n);
}
return ismersenne;
}
/*
int main()
{
printf("%d\n",mx_is_mersenne(127));
}
*/
