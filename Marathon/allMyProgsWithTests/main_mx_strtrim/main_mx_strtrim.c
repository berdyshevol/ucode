#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char *mx_strtrim(const char *str);

int main(void) {
    printf("Test strtrim\n");
    char *name = "\f My name... is Neo \t\n ";
    printf("trimed string: \"%s\"\n", mx_strtrim(name));
    //printf("%s\n", mx_concat_words(NULL)); //returns NULL

    char *s = "";
    printf("trimed string: \"%s\"\n", mx_strtrim(s));

    char *s1 = "    ";
    printf("trimed string: \"%s\"\n", mx_strtrim(s1));
    printf("%s\n", mx_strtrim(s1));



    return 0;
}

