#include <stdio.h>

void mx_ref_pointer(int i, int ******ptr);

int main(void) {
    int n;
    int *p = &n;
    int **pp = &p;
    int ***ppp = &pp;
    int ****pppp = &ppp;
    int *****ppppp = &pppp;
    int ******pppppp = &ppppp;
    mx_ref_pointer(100, pppppp);
    printf("%d\n", n);
}
