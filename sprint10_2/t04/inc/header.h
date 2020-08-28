#pragma once

#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct s_wc {
    int lines;
    int words;
    int bytes;
    char *name;
}              t_wc;

int count_words(const char *str);
int file_length(const char *filename);
int count_lines(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
char *mx_file_to_str(const char *filename);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
char *mx_strnew(const int size);
bool mx_isspace(char c);
void mx_printerr(const char *s);
char *mx_strcpy(char *dst, const char *src);
void mx_input_wc();
t_wc count_from_file(char *filename);
void print_wc(t_wc data);
