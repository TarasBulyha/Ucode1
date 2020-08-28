#include <stdlib.h>
#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    int i = 0;
    unsigned int num = 0;
    int sing = 1;
    int count = 0;

    while (mx_isspace(str[i]))
        i++;
    if ((str[i] == '+' || str[i] == '-') && mx_isdigit(str[i + 1])) {
        if (str[i] == '-')
            sing = -1;
        i++;
    }
    while (mx_isdigit(str[i])) {
        num = num * 10 + (str[i] - 48);
        i++;
        count++;
    }
    if (num > INT32_MAX && num > INT32_MIN)
         return -1;
    return (long long int)num * sing;
}

//  int main() {
//      char *stre = "99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999";
//      mx_atoi(stre);
//      printf("%d\n", stre);
//      atoi(stre);
//      printf("%d\n", stre);
//  }
