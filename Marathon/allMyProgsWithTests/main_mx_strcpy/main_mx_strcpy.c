#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);

int main() {

    char s0[] = "Hello";
    char ss0[10];
    mx_strcpy(ss0, s0);
    printf("%s\n", ss0);

    char s1[] = "";
    char ss1[10];
    mx_strcpy(ss1, s1);
    printf("%s\n", ss1);
 
    char *s2 = NULL;
    char ss2[10];
    mx_strcpy(ss2, s2);
    printf("%s\n", ss2);

}
