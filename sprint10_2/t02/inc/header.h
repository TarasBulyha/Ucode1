#pragma once

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void mx_file_cat(char *filename_src);
void mx_input_cat();
void report_error(char *filename);
int mx_strlen(const char *s);
void mx_printerr(const char *s);
