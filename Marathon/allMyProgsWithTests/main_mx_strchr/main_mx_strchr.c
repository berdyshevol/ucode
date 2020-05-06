#include <stdio.h>

char *mx_strchr(const char *s, int c);

int main(void) {
    char s[] = "Hello";
    char c = 'e';
    printf("%s - %c => %c\n", s, c, *mx_strchr(s, c));
    c = 'q';
    //printf("%s - %c => %c\n", s, c, *mx_strchr(s, c));
    char ss[] = " *sljksl";
    int i = 256+32+10;
    printf("%s - %c => %c\n", ss, i, *mx_strchr(ss, i));
    //printf("%c\n", i);

    c = '\0';
    printf("%s - %c => %c\n", s, c, *mx_strchr(s, c));

    return 0;

}
