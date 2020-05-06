#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1);
}

#include <unistd.h>

void mx_printchar(char c);

static void print_posnum(int n) {
    if (n > 9){
        print_posnum(n / 10);
    }
    mx_printchar(n % 10 + '0');
}

void mx_printint(int n) {
    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return; 
    }
    if (n < 0) {
        mx_printchar('-');
        n = -n;
    }
    print_posnum(n);
}

#include <unistd.h>
int mx_strlen(const char *c);

void mx_printstr(const char *s) {
    if (!s) {
        return;
    }
    write(1, s, mx_strlen(s));
}

#include <stdio.h>

char *mx_strcpy(char *dst, const char *src) {
    
    if (!src) 
        return NULL;
    
    int i = 0;
    while (src[i]) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}
int mx_strlen(const char *s) {
    if (!s) {
        return 0;
    }
    int l = 0;
    while (*s != '\0') {
        l++;
        s++;
    }
    return l;
}

int mx_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0') {
            return 0;
        }
        i++;
    }
    return s1[i] - s2[i];
}
#include <stdbool.h>

bool mx_isdigit(int c) {
    return c >= '0' && c <= '9';
}
#include <stdbool.h>
bool mx_isspace(char c) {
    return c == '\t'
        || c == '\n'
        || c == '\v'
        || c == '\f'
        || c == '\r'
        || c == ' ';
}
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
    while(mx_isspace(*s))
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

