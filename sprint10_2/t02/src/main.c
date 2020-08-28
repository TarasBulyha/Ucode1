#include "header.h"

int main(int argc, char **argv) {
    if (argc == 1)
        mx_input_cat();
    else
        for (int i = 1; i < argc; ++i)
            mx_file_cat(argv[i]);
    return 0;
}
