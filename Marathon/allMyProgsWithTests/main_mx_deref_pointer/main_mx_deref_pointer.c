
#include <stdio.h>

void mx_deref_pointer(char ******str);

int main(void) {
    char *s;
    char ** ss = &s;
    char *** sss = &ss;
    char **** ssss = &sss;
    char ***** sssss = &ssss;
    char ****** ssssss = &sssss;
    mx_deref_pointer(ssssss);
    printf("%s", s);
    return 0;
}
