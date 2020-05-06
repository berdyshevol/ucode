#include <stdlib.h>
#include <stddef.h>

typedef struct s_agent
{
    char *name;
    int power;
    int strength;
} t_agent;

//mx_create_new_agents.c, mx_create_agent.c, mx_strdup.c, mx_strnew.c,
//mx_strlen.c, mx_strcpy.c
t_agent *mx_create_agent(char *name, int power, int strength);
char *mx_strnew(const int size);
int mx_strlen(const char *);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);

