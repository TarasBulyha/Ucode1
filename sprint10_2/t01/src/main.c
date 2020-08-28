#include "header.h"

int main(int argc, char **argv) {
    const char usage[] = "usage: ./mx_cp [source_file] [destination_file]\n";
    
    if (argc != 3)
        mx_printerr(usage);
    else
        mx_file_copy(argv[1], argv[2]);
    return 0;
}
