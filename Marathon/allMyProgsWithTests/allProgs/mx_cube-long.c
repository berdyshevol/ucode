#include <stdbool.h>

static bool check(int n);
void mx_printchar(char c);
static void print_row_of(char c, int times);
static void draw_horizontal_line(int n);

void mx_cube(int n) {
    if (!check(n))
        return;
    //int width = n / 2 +2 + 2* n + 1;

    //section 1
    print_row_of(' ', n / 2 + 1);
    draw_horizontal_line(n);
    mx_printchar('\n');
    // draw slash n/2 times --- section 2
    for (int i = 0; i < n / 2; i++) {
        print_row_of(' ', n / 2 - i);
        mx_printchar('/');
        print_row_of(' ', 2 * n);
        mx_printchar('/');
        print_row_of(' ', i);
        mx_printchar('|');
        mx_printchar('\n');
    }
    // print second horizontal line - section 3
    draw_horizontal_line(n);
    print_row_of(' ', n / 2);
    mx_printchar('|');
    mx_printchar('\n');

    // print section 4
    for (int i= 0; i < n - n / 2 - 1; i++) { // n - n/2 -1
        mx_printchar('|');
        print_row_of(' ', 2 * n);
        mx_printchar('|');
        print_row_of(' ', n / 2);
        mx_printchar('|');
        mx_printchar('\n');
    }

    // print section 5
    mx_printchar('|');
    print_row_of(' ', 2 * n);
    mx_printchar('|');
    print_row_of(' ', n / 2);
    mx_printchar('+');
    mx_printchar('\n');

    // section 6
    for (int i = 0; i < n / 2; i++) {
        mx_printchar('|');
        print_row_of(' ', 2 * n);
        mx_printchar('|');
        print_row_of(' ', n / 2 - i - 1);
        mx_printchar('/');
        mx_printchar('\n');
    }

    // print section 7
    draw_horizontal_line(n);
    mx_printchar('\n');

}

static void draw_horizontal_line(int n) {
    print_row_of('+', 1);
    print_row_of('-', 2 * n);
    print_row_of('+', 1);
}

static void print_row_of(char c, int times) {
    for (int i = 0; i < times; i++)
        mx_printchar(c);
}

static bool check(int n) {
    if (!(n > 1))
        return false;
    return true;
}

