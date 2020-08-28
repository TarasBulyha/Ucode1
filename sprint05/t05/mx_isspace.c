#include <stdbool.h>

bool mx_isspace(char c){
     char space[6] = {'\t', '\n','\v', '\f', '\r', ' '};
     for(int i = 0; i < 6; i++)
          if (c == space[i])
               return 1;
     return 0;
}
