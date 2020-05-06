#include <stdio.h>
#include <string.h>

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len);

int main(void) {
    char *hs = "kshjdskheghel----";
    char ns[] = "hel";
    char * p = (char *) mx_memmem(hs, strlen(hs), ns, strlen(ns));
    if (p == NULL)
        printf("NULL");
    else
        printf("%s\n", p);
    return 0;
}

