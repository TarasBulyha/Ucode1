#include "header.h"

void mx_file_print(char *filename) {
    int fd = open(filename, O_RDONLY);
    char buffer = 0;
    const char error[] = "error\n";

    if (fd == -1)
        mx_printerr(error);
    while (read(fd, &buffer, 1) > 0)
        write(1, &buffer, 1);
    close(fd);
}
