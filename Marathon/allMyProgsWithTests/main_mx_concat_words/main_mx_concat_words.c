#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char *mx_concat_words(char **words);

int main(void) {
    char *words[] = {"Free", "your", "mind.", NULL};
    printf("%s\n", mx_concat_words(words)); //returns "Free your mind."
    //printf("%s\n", mx_concat_words(NULL)); //returns NULL
    return 0;
}

