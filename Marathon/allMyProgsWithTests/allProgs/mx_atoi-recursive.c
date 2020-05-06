#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
static char *go_through_space(char *s);
static char *get_sign(char *s, int *sign);
static int get_number(char *s, int current_number);

int mx_atoi_recursive(const char *str) {
    char *s = (char *) str;
    s = go_through_space(s);
    int sign = 1;
    s = get_sign(s, &sign);
    return sign * get_number(s, 0);
}

static char *go_through_space(char *s) {
    while(mx_isspace(*s))
        s++;
    return s;
}

static char *get_sign(char *s, int *sign) {
    if (*s == '-') {
        s++;
        *sign = -1;
    }
    if (*s == '+') {
        s++;
        *sign = 1;
    }
    return s;
}

static int get_number(char *s, int current_number) {
    if (*s == '\0' || !mx_isdigit(*s))
       return current_number;
    
    int digit = *s - '0';
    s++;
    return get_number(s, current_number * 10 + digit);
}
