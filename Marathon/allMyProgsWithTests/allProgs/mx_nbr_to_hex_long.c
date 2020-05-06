#include "nbr_to_hex.h"

static void reverse(char *ss);

char *mx_nbr_to_hex_long(unsigned long nbr) {
    char *hexadecimal = mx_strnew(100);
    int j = 0;
    unsigned long quotient = nbr;
    while (quotient != 0) {
        unsigned long remainder = quotient % 16;          //step 1
        if (remainder < 10)
            hexadecimal[j++] = remainder + '0';   //step 2
        else
            hexadecimal[j++] = remainder + 'a' - 10;   //step 3
        quotient = quotient / 16;            //step 4
    }
    reverse(hexadecimal);
    return hexadecimal;
}

static void reverse(char *ss) {
    char *s = ss;
    int l = 0;
    while (s[l] != '\0')
        l++;
    for (int i = 0; i < l / 2; i++) {
        char t = s[i];
        s[i] = s[l - i - 1];
        s[l - i - 1] = t;
    }  
}

