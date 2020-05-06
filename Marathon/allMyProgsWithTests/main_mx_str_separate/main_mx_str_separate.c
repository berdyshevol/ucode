#include <stdio.h>

void mx_str_separate(const char *str, char delim);

int main(void) {
    char str[] = "MMMMatrix";
    char delim = 'M';
    mx_str_separate(str, delim);
}
