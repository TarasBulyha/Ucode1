#include <stdbool.h>
#include <stdio.h>

bool mx_isdigit (int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
    int i = 0;
    unsigned long long int result = 0; 
    int minus = 1;
    while (mx_isspace(str[i]))
        i++;
    if (str[i] == '-') {
        minus = -1; i++;
    } 
    for (; str[i] != '\0'; ++i) {
        result = result * 10 + str[i] - 48;
        if (!mx_isdigit(str[i]))
            return 0;
    }
    return result * minus; 
}

/*
#include <stdlib.h>

int main (void) {
    const char *number = "-1496905";   // FALSE
    const char *number1 = "18410971";      // 1234
    const char *number2 = "2147483650";   //-1234
  
    printf("string %s = %i\n", number, mx_atoi(number));
    printf("string1 %s = %i\n", number1, mx_atoi(number1));
    printf("string2 %s = %i\n", number2, mx_atoi(number2));
    printf("string2 %s = %i\n", number2, atoi(number2));

    return 0;
}
*/
