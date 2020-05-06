#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    if (agents == NULL) return NULL;
    
    // count how many filtered agents
    int count = 0;
    for(int i = 0; agents[i] != NULL; i++){
        if (mx_strcmp(agents[i]->name, "Smith") == 0
            && agents[i]->strength < strength)
            count++;
    }
    
    // make new array
    t_agent **arr = (t_agent **) malloc((count + 1)* sizeof(t_agent *));
    if (arr == NULL) return NULL;

    // try create agents
    int i = 0;
    int j = 0;
    for (; agents[i] != NULL; i++) {
        // try make one
        if (mx_strcmp(agents[i]->name, "Smith") == 0
            && agents[i]->strength < strength){
            t_agent *new_agent = mx_create_agent(agents[i]->name, agents[i]->power, agents[i]->strength);
            if (new_agent == NULL) return NULL;
            
            // push
            arr[j] = new_agent;
            j++;
        }
    }
    arr[j] = NULL;
    
    // delete old
    mx_exterminate_agents(&agents);
    // return new array
    return arr;
}

