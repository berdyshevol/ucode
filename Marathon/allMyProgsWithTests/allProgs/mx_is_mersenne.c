#include <stdbool.h>

bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n) {
    if (!mx_is_prime(n))
        return false;
    
    int pow = 1;
    
    int g = mx_pow(2, pow);
    while (g < n + 1) {
        pow++;
        g = mx_pow(2, pow);
    }
    return g == n + 1;
}
