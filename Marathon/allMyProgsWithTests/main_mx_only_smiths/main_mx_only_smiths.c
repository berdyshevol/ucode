#include "only_smiths.h"
#include <stdio.h>

t_agent **mx_only_smiths(t_agent **agents, int strength);

int main(void) {
    t_agent **agents = malloc(5*sizeof(t_agent *));
    agents[0] = mx_create_agent("Smith", 150, 166);
    agents[1] = mx_create_agent("Brown", 147, 57);
    agents[2] = mx_create_agent("Smith", 151, 65);
    agents[3] = mx_create_agent("Smith", 123, 321);
    agents[4] = NULL;
    int i = 0;
    printf("Beginning\n");
    
    while (agents[i] != NULL) {
        printf("i=%d name=%s, p=%d, s=%d\n",i, agents[i]->name, agents[i]->power, agents[i]->strength);
        i++;
    }
    printf("End\n");
    t_agent ** filtered_agents = mx_only_smiths(agents, 500); //returns array with 1 element

    i = 0;
    if (*filtered_agents == NULL) printf("NO AGENTS\n");
    else {
        while (filtered_agents[i] != NULL) {
            printf("name=%s, p=%d, s=%d\n", filtered_agents[i]->name, filtered_agents[i]->power, filtered_agents[i]->strength);
            i++;
        }
    }
    //printf("name=%s, p=%d, s=%d\n", filtered_agents[i]->name, agent->power, agent->strength);
    return 0;
}

