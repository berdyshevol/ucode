#include "create_new_agents.h"
#include <stdio.h>

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count);

int main(void) {
    char *names[] = {"Thompson", "Smith", "Colson"};
    int powers[] = {33, 66, 99};
    int strengths[] = {133, 166, 196};
    t_agent **arr = mx_create_new_agents(names, powers, strengths, 3); //returns 't_agent' type array
    
    // for (t_agent *p = *arr; p != NULL; p++) {
    //     printf("name=%s, power=%d, strength=%d\n", p->name, p->power, p->strength);
    // }
    printf("check MAIN %c %d %d\n", arr[0]->name[0], arr[0]->power, arr[0]->strength);
    for (int i = 0; 1; i++) {
        if (arr[i] == NULL) {
            printf("NULL\n");
            break;
        }
        printf("name=%s, power=%d, strength=%d\n", arr[i]->name, arr[i]->power, arr[i]->strength);
    }
    return 0;
}

