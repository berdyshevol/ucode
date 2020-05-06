#include <stdio.h>
int mx_count_words(const char *str, char delimiter);

int main(void) {
    char str[] = " follow * the   white rabbit  ";
    char c;
    c = ' ';
    printf("In \"%s\" \'%c' is - %d\n", str, c, mx_count_words(str, c));

    c = '*';
    printf("In \"%s\" \'%c' is - %d\n", str, c, mx_count_words(str, c));
    return 0;
}
