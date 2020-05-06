#include <stdio.h>
#include <stdlib.h>

int mx_atoi(const char *str);

int main(void) {
    printf("-------------------------\n");
    char s1[] = "432";
    printf("\"%s\" ->\'%d\'\n", s1, mx_atoi(s1));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s1, atoi(s1));

    char s2[] = "+123";
    printf("\"%s\" ->\'%d\'\n", s2, mx_atoi(s2));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s2, atoi(s2));

    char s3[] = "-123";
    printf("\"%s\" ->\'%d\'\n", s3, mx_atoi(s3));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s3, atoi(s3));

    char s4[] = "!123";
    printf("\"%s\" ->\'%d\'\n", s4, mx_atoi(s4));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s4, atoi(s4));

    char s5[] = "  123";
    printf("\"%s\" ->\'%d\'\n", s5, mx_atoi(s5));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s5, atoi(s5));

    char s6[] = "  +123";
    printf("\"%s\" ->\'%d\'\n", s6, mx_atoi(s6));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s6, atoi(s6));

    char s7[] = "  -123";
    printf("\"%s\" ->\'%d\'\n", s7, mx_atoi(s7));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s7, atoi(s7));

    char s8[] = "  !123";
    printf("\"%s\" ->\'%d\'\n", s8, mx_atoi(s8));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s8, atoi(s8));

    char s9[] = "  123!";
    printf("\"%s\" ->\'%d\'\n", s9, mx_atoi(s9));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s9, atoi(s9));

    char s10[] = "  +123 !";
    printf("\"%s\" ->\'%d\'\n", s10, mx_atoi(s10));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s10, atoi(s10));

    char s11[] = "  -2147483648 !";
    printf("\"%s\" ->\'%d\'\n", s11, mx_atoi(s11));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s11, atoi(s11));
    
    char s12[] = "  -2147483649 !";
    printf("\"%s\" ->\'%d\'\n", s12, mx_atoi(s12));
    printf("real atoi \"%s\" ->\'%d\'\n\n", s12, atoi(s12));

    return 0;
}

