#include "header.h"

void report_error(char *filename) {
    const char error[] = ": No such file or directory\n";

    mx_printerr("mx_cat: ");
    mx_printerr(filename);
    mx_printerr(error);
    return;
}

void mx_file_cat(char *filename_src) {
    int fd_src = open(filename_src, O_RDONLY);
    char buffer = 0;

    if (fd_src == -1) {
        report_error(filename_src);
    }        
    while (read(fd_src, &buffer, 1) > 0)
        write(1, &buffer, 1);
    close(fd_src);
}

void mx_input_cat() {
    char buffer = 0;

    while (read(0, &buffer, 1) > 0) {
        write(1, &buffer, 1);
    }
}
