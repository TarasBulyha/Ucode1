#include "header.h"

int main(int argc, char **argv) {
    const char usage[] = "usage: ./read_file [file_path]\n";
    
    if (argc != 2)
        mx_printerr(usage);
    else
        mx_file_print(argv[1]);
    return 0;
}
