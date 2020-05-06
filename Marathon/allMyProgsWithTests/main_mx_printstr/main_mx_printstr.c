#include <stdio.h>
void mx_printstr(const char *s);
int mx_strlen(const char *c);

int main(void) {
    
    printf("\n-----\n");
    char ss[] = "12345";
    printf("12345-length %d\n", mx_strlen(ss));
    mx_printstr(ss);
    printf("\n-----\n");
    char s[] = "";
    printf("empty-length %d\n", mx_strlen(s));
    mx_printstr(s);

    printf("\n-----\n");
    char *sss = NULL;
    printf("NULL-length %d\n", mx_strlen(sss));
    return 0;
}
