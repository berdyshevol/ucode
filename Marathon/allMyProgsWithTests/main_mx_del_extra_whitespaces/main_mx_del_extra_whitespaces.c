#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char *mx_del_extra_whitespaces(const char *str);

int main(void) {
    char *name = "  My  name  is  Neo  Hello     World    ";
    char *s = mx_del_extra_whitespaces(name);
    printf("\"%s\"\n", s); //returns "Free your mind."
    printf("%c", s[26]);
    //printf("%s\n", mx_concat_words(NULL)); //returns NULL
    return 0;
}

