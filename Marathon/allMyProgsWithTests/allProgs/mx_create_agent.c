#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
  if (!name) return NULL;
  
  t_agent *res = NULL;
  res = (t_agent *) malloc(sizeof(t_agent));
  if (!res) return NULL;

  res->name = mx_strdup(name);
  if (res->name == NULL) return NULL;

  res->power = power;
  res->strength = strength;
  return res;
}

