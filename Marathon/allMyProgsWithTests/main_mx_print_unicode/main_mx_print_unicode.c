#include "../libmx.h"

void mx_print_unicode(wchar_t c);

int main(void) {
    for (int i = 50; i < 100000; i+=10){
        mx_print_unicode(i);
        //printf("\'\n");
    }
    // for (int i = 90; i < 100; i++)
    //     mx_print_unicode(i);
    return 0;
}

