#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    if (!name || !power || !strength) return NULL;

    // try create array
    t_agent **arr = (t_agent **) malloc((count + 1)* sizeof(t_agent *));
    if (arr == NULL) return NULL;

    // try create agents
    int i;
    for (i = 0; i < count; i++) {
        // try make one
        t_agent *new_agent = mx_create_agent(name[i], power[i], strength[i]);
        if (new_agent == NULL) return NULL;
        // push
        arr[i] = new_agent;
    }
    arr[i] = NULL;
    return arr;
}

