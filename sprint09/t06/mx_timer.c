#include <time.h>
// #include <stdio.h>

double mx_timer(void(*f)()) {
    if (clock() < 0) {
        return -1;
    }
    double start = clock();
    f();
    double finish = clock();
    return ((finish-start)/CLOCKS_PER_SEC);
}

// void f(void) {
//   double sum = 0;
//   int i, n = 10000000;
//     for (i = 0; i < n; i++) {
//         sum +=1;
//     }
// }

