#include <stdio.h>

int mx_get_substr_index(const char *str, const char *sub);

int main(void) {
    int n1 = mx_get_substr_index("McDonalds", "Don"); //returns 2
    int n2 = mx_get_substr_index("McDonalds", "Donatello"); //returns -1
    int n3 = mx_get_substr_index("McDonalds", NULL); //returns -2
    int n4 = mx_get_substr_index(NULL, "Don"); //returns -2
    printf("%d %d %d %d", n1, n2, n3, n4);
    return 0;
}

