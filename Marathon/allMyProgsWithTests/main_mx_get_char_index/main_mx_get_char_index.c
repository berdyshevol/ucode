#include <stdio.h>
int mx_get_char_index(const char *str, char c);

int main(void) {
    char *s = "Hello";
    char c = 'l';
    printf("char %c in \"%s\" is at %d\n", c, s, mx_get_char_index(s, c)); 

    char *s1 = "Hello";
    char c1 = 'p';
    printf("char %c in \"%s\" is at %d\n", c1, s1, mx_get_char_index(s1, c1)); 

    char *s2 = NULL;
    char c2 = 'l';
    printf("char %c in \"NULL-string\" is at %d\n", c2, mx_get_char_index(s2, c2));   
    return 0;
}

