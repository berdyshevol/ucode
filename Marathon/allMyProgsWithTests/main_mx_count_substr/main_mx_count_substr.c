#include <stdio.h>
#include <stdlib.h>

int mx_count_substr(const char *str, const char *sub);

int main(void) {
    char s[] = "yo yoyoyo yo Ne o";
    char subs[] = "yo";
    //char subs[] = " ";
    printf("case 1) result should be 5: %d\n", mx_count_substr(s, subs));
    
    char s1[] = "";
    //char subs[] = "yo";
    char subs1[] = " ";
    printf("case 2) result should be 0: %d\n", mx_count_substr(s1, subs1));

    char s2[] = "   yo yoyoyo yo Ne o";
    char subs2[] = "";
    //char subs2[] = "";
    printf("case 3) result should be -1: %d\n", mx_count_substr(s2, subs2));

    return 0;
}
