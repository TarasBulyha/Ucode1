int mx_gcd(int a, int b);

int mx_lcm(int a, int b){
    int lcm = (a * b) / mx_gcd(a,b);
    if (lcm > 2147483647)
    return 0;
    else return lcm;
}
// #include <stdio.h>
// int main(){
//     printf("%d", mx_lcm(20,15));

// }