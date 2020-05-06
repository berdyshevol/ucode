
#include <stdio.h> 
int mx_strlen(const char *s);

int main(void) {
    printf("check stren\n");
    char * s = NULL;
    printf("%d\n", mx_strlen(s));
    char ss[] = "";
    printf("%d\n", mx_strlen(ss));
    char sss[] = "123456";
    printf("%d\n", mx_strlen(sss));
}
