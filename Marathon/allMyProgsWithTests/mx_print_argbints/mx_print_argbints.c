#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(char *s);
int mx_atoi(char *s);
bool mx_isspace(char c);
bool mx_isdigit(char c);
void print_binary(char *s);

int main(int c, char ** v) {
    for (int i = 1; i < c; i++) {
        print_binary(v[i]);
        mx_printchar('\n');
    }
    return 0;
}

void print_binary(char *s) {
    int n = mx_atoi(s);
    for (int i = 31; i >= 0; i--) {
        int byte = n >> i;
        if (byte & 1)
            mx_printchar('1');
        else
            mx_printchar('0');
    }
}

