//#ifndef ONLY_SMITHS_H

#include <stdlib.h>
#include <stddef.h>

typedef struct s_agent
{
    char *name;
    int power;
    int strength;
} t_agent;

//mx_strcmp.c, mx_exterminate_agents.c, mx_create_agent.c, 
//mx_strdup.c, mx_strnew.c, mx_strlen.c, mx_strcpy.c
void mx_exterminate_agents(t_agent ***agents);
t_agent *mx_create_agent(char *name, int power, int strength);
char *mx_strnew(const int size);
int mx_strlen(const char *);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strcmp(const char *s1, const char *s2);

//#endif ONLY_SMITHS_H

