#pragma once

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

char *mx_strjoin(const char *s1, const char *s2);
int mx_file_length(const char *filename);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_file_to_str(const char *filename);
