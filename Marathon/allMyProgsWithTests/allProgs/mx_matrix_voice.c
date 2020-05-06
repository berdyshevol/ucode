#include <unistd.h>

void mx_matrix_voice(void) {
    char c = '\a';    
    write(1, &c, 1);
}

