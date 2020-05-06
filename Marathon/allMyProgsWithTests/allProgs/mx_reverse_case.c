#include <stdbool.h>

bool mx_islower(int c);
bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s) {
    if (!s) {
        return;
    }
    while (*s) {
        if (mx_islower(*s)) {
            *s = mx_toupper(*s);
        }
        else if (mx_isupper(*s)) {
            *s = mx_tolower(*s);
        }
        s++;
    }
}
