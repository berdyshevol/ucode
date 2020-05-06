#include <stdbool.h>

void mx_printint(int n);
void mx_printchar(char c);

static int get_number(char *s);
static bool check_MIN(char *s);

int main(int c, char *v[]) {
    if (c == 1)
        return 0;
    int sum = 0;
    for (int i = 1; i < c; i++) {
        sum += get_number(v[i]);
    }
    mx_printint(sum);
    mx_printchar('\n');
    return 0;
}

static int get_number(char *s) {
    int sign = 1;
    if (*s == '-') {
        if (check_MIN(s + 1))
            return -2147483648;
        sign = -1;
        s++;
    }
    else if (*s == '+') {
        s++;
    }
    int n = 0;
    while (*s) {
        if (!(*s >= '0' && *s < '9')) {
            n = 0;
            break;
        }
        n = 10 * n + *s - '0';
        s++;
    }
    return sign * n;
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

