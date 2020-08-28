#pragma once

#include <stdlib.h>
#include "agent.h"

char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

t_agent *mx_create_agent(char *name, int power, int strength);
