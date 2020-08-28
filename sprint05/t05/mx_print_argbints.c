#include <stdbool.h>
int mx_atoi(const char *str);
bool mx_isdigit (int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printchar(char c);
int main (int argc, char *argv[]) {
    char *noll = "0";
    if (argc >= 1) {
        for (int i = 1; i < argc; i++){
            if (mx_atoi(argv[i]) != 0 || *argv[i] == *noll){
                int n = mx_atoi(argv[i]);
                for(int j = 31; j >= 0; j--){
                    int k = n >> j;
                    if (k)
                        mx_printchar('1');
                    else
                        mx_printchar('0');
                }
            }
            mx_printchar('\n');
        }
    }
    return 0;
}