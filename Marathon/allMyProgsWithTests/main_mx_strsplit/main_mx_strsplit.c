#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char **mx_strsplit(char const *s, char c);

int main(void) {
    char * s = "  aaa  bb cc   ";
    char **arr = mx_strsplit(s, ' '); // arr = ["Good bye,", "Mr.", "Anderson."]
    for (int i = 0; arr[i] != NULL; i++) {
        printf("\'%s\', ", arr[i]);
    }
    printf("\n");
    //char *s = " Knock, knock, Neo. ";
    //char *arr = strsplit(s, ' '); // arr = ["Knock,", "knock,", "Neo."]
    return 0;
}

