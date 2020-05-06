#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

static char *go_through_space(char *s);
static int get_number(char *s);
static bool check_MIN(char *s);

int mx_atoi(const char *str) {
    char *s = (char *) str;

    s = go_through_space(s);
    // take care of negative number
    int sign = 1;
    if (*s == '-') {
        if (check_MIN(s + 1)) {
            return -2147483648;
        }
        sign = -1;
        s++;
    }
    if (*s == '+') {
        s++;
    }
    // campute positive
    return sign * get_number(s);
}

static char *go_through_space(char *s) {
    while (mx_isspace(*s))
        s++;
    return s;
}

static int get_number(char *s) {
    int res = 0;
    while (*s != '\0' && mx_isdigit(*s)) {
       //вставить проверку на MAX MIN int
       res = 10 * res + (*s) - '0';
       s++;
    } 
    return res;
}

static bool check_MIN(char *s) {
    char min_int[] = "2147483648";
    int i = 0;
    while (s[i] == min_int[i])  {
        if (s[i] == '\0')
            return true;
        s++;
    }
    return false;
}

