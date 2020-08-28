// #include <unistd.h>

// void mx_printchar(char c) {
//   write(1, &c, 1);
// }

// void mx_printint(int n) {
//     int n_copy = 0;
//     if (n == -2147483648) {
//         n_copy = n;
//         n += 1;
//         mx_printchar('-');
//         n *= -1;
//     }
//     if (n < 0) {
//         mx_printchar('-');
//         n *= -1;
//     }
//     if (n < 10 && n >= 0) {
//         mx_printchar(n + '0');
//     }
//     else {
//         int n_div = n / 10;
//         int power = 1;
//         int print_digit = 0;
//         while (power <= n_div) {
//             power *= 10;
//         }
//         while (power) {
//             print_digit = n / power;
//             mx_printchar(print_digit + '0');
//             n = n % power;
//             power = power / 10;
//             if (n_copy == -2147483648) {
//                 n += 1;
//             }
//         }
//     }
// }

void mx_foreach(const int *arr, int size, void (*f)(int)) {
    for (int i = 0; i < size; i++) {
        f(arr[i]);
    }
}


