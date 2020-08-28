#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *agent = NULL;

    if (!name)
        return agent;
    agent = malloc(sizeof(t_agent));
    agent->name = mx_strdup(name);
    agent->power = power;
    agent->strength = strength;
    return agent;
}

int main () {
    t_agent *new_agent = mx_create_agent("Smith", 160, 66);

    printf("Name: %s \nPower: %d \nStrngth: %d \n", new_agent->name, new_agent->power, new_agent->strength);
}
