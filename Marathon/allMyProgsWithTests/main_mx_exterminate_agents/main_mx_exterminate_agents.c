#include "create_new_agents.h"

#include <stdio.h>

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count);
void mx_exterminate_agents(t_agent ***agents);

int main(void) {
    char *names[] = {"Thompson", "Smith", "Colson"};
    int powers[] = {33, 66, 99};
    int strengths[] = {133, 166, 196};
    t_agent **arr = mx_create_new_agents(names, powers, strengths, 3); //returns 't_agent' type array
    
    mx_exterminate_agents(&arr);

    if(arr == NULL) printf("DELETED");

    return 0;
}

