#include <stdio.h>

char *mx_strncpy(char *dst, const char *src, int len);

int main(void) {
    printf("task 03\n");

    char dst[20];
    char src[] = "Hello";
    mx_strncpy(dst, src, 2);

    if (dst[2] == '\0')
            printf("2 element is 0 \n" );
    else
       printf("2 element is not 0 \n" );
    
    printf("%s\n", dst);

    mx_strncpy(dst, src, 10);
    printf("%s\n", dst);

    mx_strncpy(dst, src, 5);
    printf("%s\n", dst);

    return 0;
}
