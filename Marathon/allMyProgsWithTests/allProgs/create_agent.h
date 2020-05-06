#include <stdlib.h>
#include <stddef.h>

char *mx_strnew(const int size);
int mx_strlen(const char *);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);

typedef struct s_agent
{
    char *name;
    int power;
    int strength;
} t_agent;

