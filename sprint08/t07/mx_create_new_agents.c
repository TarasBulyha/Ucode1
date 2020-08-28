#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    t_agent **agents = NULL;

    if (name == NULL || power == NULL || strength == NULL)
        return NULL;
    agents = (t_agent**)malloc(sizeof(t_agent *) * count);
    for (int i = 0; i < count; i++) {
        agents[i] = mx_create_agent(name[i], power[i], strength[i]);
    }
    return agents;
}

// int main () {
//     char *names[] = {"Thompson", "Smith", "Colson"};
//     int power[] = {33, 66, 99};
//     int strength[] = {133, 166, 196};
//     int count = 3;

//     t_agent **new_agent = mx_create_agents(names, power, strength, count);
//     for (int i = 0; i < count && new_agent != NULL; i++) {
//         printf("Name: %s \nPower: %d \nStrngth: %d \n", new_agent[i]->name, new_agent[i]->power, new_agent[i]->strength);    
//     }
// }
