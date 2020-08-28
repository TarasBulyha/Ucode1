#include "header.h"

void report_error(char *filename) {
    const char error[] = ": No such file or directory\n";

    mx_printerr("mx_cp: ");
    mx_printerr(filename);
    mx_printerr(error);
    exit(1);
}

void mx_file_copy(char *filename_src, char *filename_dst) {
    int fd_src = open(filename_src, O_RDONLY);
    int fd_dst = open(filename_dst, O_WRONLY);
    char buffer = 0;

    if (fd_src == -1) {
        close(fd_dst);
        report_error(filename_src);
    }        
    if (fd_dst == -1) {
        close(fd_src);
        report_error(filename_dst);
    }        
    while (read(fd_src, &buffer, 1) > 0)
        write(fd_dst, &buffer, 1);
    close(fd_src);
    close(fd_dst);
}
