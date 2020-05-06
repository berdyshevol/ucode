#include <stdio.h>

void mx_reverse_case(char *s);

int main(void) {
    char str[] = "HeLLO Neo!";
    printf("\"%s\" - ", str);
    mx_reverse_case(str);
    printf("\"%s\"\n", str);
    printf("The end\n");
    return 0;
}
