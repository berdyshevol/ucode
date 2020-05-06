#include <stdio.h>
char *mx_del_extra_spaces(const char *str);

int main(void) {
    printf("Test mx_del_extra_spaces\n");
    char *name = "  My  name  is  Neo  Hello     World    ";
    printf("Original string \"%s\"\n", name);
    char *s = mx_del_extra_spaces(name);
    printf("\"%s\"\n", s);

    char *name1 = "     ";
    printf("Original string \"%s\"\n", name1);
    char *s1 = mx_del_extra_spaces(name1);
    printf("\"%s\"\n", s1);

    char *name2 = "";
    printf("Original string \"%s\"\n", name2);
    char *s2 = mx_del_extra_spaces(name2);
    printf("\"%s\"\n", s2);

    return 0;
}

