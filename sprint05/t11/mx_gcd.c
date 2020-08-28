int mx_gcd(int a, int b) {
    if (b != 0)
        return mx_gcd(b, a % b);
    else
        return a;
}

// #include <stdio.h>
// int main() {
//     int a, b;
//     printf("Enter two positive integers: ");
//     scanf("%d %d", &a, &b);
//     printf("G.C.D of %d and %d is %d.", a, b, mx_gcd(a, b));
//     return 0;
// }