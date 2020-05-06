#include "create_new_agents.h"

void mx_exterminate_agents(t_agent ***agents) {
    if (!agents) return;
    // go through array
    t_agent **p = *agents;
    int i = 0;
    while (p[i] != NULL) {
        // delete name
        free(p[i]->name);
        // delete structure
        free(p[i]);

        i++;
    }
    // delete array
    free(*agents);
    *agents = NULL;
}


