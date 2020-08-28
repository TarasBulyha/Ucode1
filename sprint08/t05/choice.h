#ifndef MX_NBR_TO_HEX_H
#define MX_NBR_TO_HEX_H
#include <stdlib.h>
char *mx_strnew(const int size);
char *mx_nbr_to_hex(unsigned long nbr);
typedef struct s_calcul {
    unsigned long number;
    unsigned long quot;
    unsigned long rem;
    int size;
}              t_calcul;
#endif
