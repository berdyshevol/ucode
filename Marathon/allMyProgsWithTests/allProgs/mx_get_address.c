#include "get_address.h"

char *mx_get_address(void *p) {
    char *s = mx_strnew(50);
    if (!s) return NULL;

    char prefix[] = "0x";
    mx_strcpy(s, prefix);
    mx_strcpy(&s[2], mx_nbr_to_hex((unsigned long)p));

    return s;
}

