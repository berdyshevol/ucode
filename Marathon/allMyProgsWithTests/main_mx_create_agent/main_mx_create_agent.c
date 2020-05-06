#include "create_agent.h"
#include <stdio.h>

t_agent *mx_create_agent(char *name, int power, int strength);

int main(void) {
    t_agent *agent = mx_create_agent("Smith", 150, 66);
    printf("name=%s, p=%d, s=%d\n", agent->name, agent->power, agent->strength);
    return 0;
}

