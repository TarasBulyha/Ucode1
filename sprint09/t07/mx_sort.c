#include <stdbool.h>
//#include <stdio.h>

// bool compare(int a, int b) {
//     return a > b;
// }

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
  for (int i = 0; i < size - 1; i ++) {
      int m = i;
      for (int j = i + 1; j < size; j++) {
        if (f(arr[m], arr[j]))
            m = j;
      }
      int t = arr[m];
      arr[m] = arr[i];
      arr[i] = t;
  }
}

