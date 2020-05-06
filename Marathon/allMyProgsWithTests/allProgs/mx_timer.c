#include <time.h>

double mx_timer(void (*f)()) {
    if (clock() < 0)
        return -1;
    double srt = clock();
    f();
    double fnsh = clock();
    return (fnsh - srt) / CLOCKS_PER_SEC; 
}

