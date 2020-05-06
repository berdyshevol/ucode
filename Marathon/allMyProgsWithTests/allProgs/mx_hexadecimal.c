#include <unistd.h>

void mx_printchar(char c);

void mx_hexadecimal(void) {
    for (char i = '0'; i <= '9'; i++) {
        mx_printchar(i);
    }
    for (char i = 'A'; i <= 'F'; i++) {
        mx_printchar(i);
    }
    mx_printchar('\n');
}

