#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long result = 0;

    for (int i = 0; hex[i] != 0; i++) {
        if(!mx_isdigit(hex[i]) && !mx_isalpha(hex[i])) {
            return 0;
        }
        if (mx_isdigit(hex[i])) {
            result = result * 16+ (hex[i] - 48 );
        } 
        else if (mx_isalpha(hex[i])) {
            if ((hex[i] > 70 && hex[i] < 97) || (hex[i] > 102)) {
                return 0;
            }
            if (mx_islower(hex[i])) {
                result = result * 16 + (hex[i] - 87) ;
            }
            if (mx_isupper(hex[i])) {
                result = result  * 16 + (hex[i] - 55);
            }
        }
    }

    return result;
}
