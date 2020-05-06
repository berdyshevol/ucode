#include <stdio.h>
#include <limits.h>
int mx_sqrt(int x);

int main(void) {
    int n;
    n = 0;
    printf("sqr(%d) = %d\n\n", n, mx_sqrt(n));
    n = 1;
    printf("sqr(%d) = %d\n\n", n, mx_sqrt(n));
    n = 3;
    printf("sqr(%d) = %d\n\n", n, mx_sqrt(n));
    n = 214*214;
    printf("sqr(%d) = %d\n\n", n, mx_sqrt(n));
    n = 215*215;
    printf("sqr(%d) = %d\n\n", n, mx_sqrt(n));
    n = 216*216;
    printf("sqr(%d) = %d\n\n", n, mx_sqrt(n));
    n = 217*217;
    printf("sqr(%d) = %d\n\n", n, mx_sqrt(n));
    n = 46340*46340;
    printf("sqr(%d) = %d\n", n, mx_sqrt(n));
    printf("\n__________\n\n%d is max pissible integer that in square(%d) is less than MAX_INT\n",46340, 46340*46340);
    
    // for (int i = 100; i - INT_MAX / i < 0; i++) {
    //     if (mx_sqrt(i*i) != 0)
    //         printf("%d ok\n", i);
    //     else break;
    // }
    return 0;
}


