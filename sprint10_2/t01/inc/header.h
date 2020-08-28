#pragma once

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void mx_file_copy(char *filename_src, char *filename_dst);
void report_error(char *filename);
int mx_strlen(const char *s);
void mx_printerr(const char *s);
