#include <stdbool.h>

double mx_pow(double n, unsigned int pow);
static int count_numofgigits(int num);

bool mx_is_narcissistic(int num) {
    int pow = count_numofgigits(num);
    int narc = 0;
    int n = num;

    while (n > 0 && narc <= num) {
        narc += mx_pow(n % 10, pow);
        n = n / 10;
    }
    if (narc > num) {
        return false;
    }
    return narc == num;
}

static int count_numofgigits(int num) {
    int l = 1;
    while ((num = num / 10) > 0){
        l++; 
    }
    return l;
}
