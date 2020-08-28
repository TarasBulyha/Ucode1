#pragma once

#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

enum e_mode {
	DEFAULT,
	NAME,
	POWER,
	STRENGTH
};

typedef struct s_agent {
    char *name;
    int power;
    int strength;
}              t_agent;

#include <stdio.h>

int file_length(const char *filename);
void mx_printchar(char c);
void mx_printint(int n);
char *mx_file_to_str(const char *filename);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
char *mx_strnew(const int size);
bool mx_isspace(char c);
bool mx_isdigit(char c);
int mx_atoi(const char *str);
void mx_printerr(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strdup(const char *str);
void mx_check_args(int argc, char **argv);
enum e_mode get_mode(char *str);
t_agent **parse_agents(char *filename);
void mx_printstr(const char *s);
void print_agents(t_agent **agents);
void delete_agents(t_agent **agents);
