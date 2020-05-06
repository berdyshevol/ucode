#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char *mx_strjoin(char const *s1, char const *s2);
void mx_printstr(char *);

int main(void) {
    char str1[] = "this";
    char str2[] = "dodge ";
    char *str3 = NULL;
    char *s;
    printf("%s\n", s = mx_strjoin(str2, str1)); //returns "dodge this"
    free(s);

    printf("%s\n", s = mx_strjoin(str3, str1)); //returns "this"
    printf("%d\n", s[6]);
    free(s);
    system("leaks -q a.out");
    return 0;
}

