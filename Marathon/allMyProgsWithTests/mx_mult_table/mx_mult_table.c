#include <stdbool.h>
#include <stdio.h> // -----delete
bool mx_isdigit(char c);
int mx_atoi(char *c);
void mx_printint(int n);
void mx_printchar(char c);
static void print_table(int a, int b);

int main(int c, char *v[]) {
    if (c != 3)
        return 0;
    if ( !(mx_isdigit(v[1][0]) && v[1][1] == '\0') )
        return 0;
    if ( !(mx_isdigit(v[2][0]) && v[2][1] == '\0') )
        return 0;
    int first_d = mx_atoi(v[1]);
    int second_d = mx_atoi(v[2]);
    if (second_d < first_d)
        print_table(second_d, first_d);
    else
        print_table(first_d, second_d);
    return 0;
}

static void print_table(int a, int b) {
    for (int i = a; i <= b; i++) {
        for (int j = a; j <= b; j++) {
            mx_printint(i * j);
            if (j != b)
                mx_printchar('\t');
        }
        mx_printchar('\n');
    }
}

