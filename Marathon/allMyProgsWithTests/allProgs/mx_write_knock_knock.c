#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void) {
    char s[] = "Follow the white rabbit.\n";
    write(1, s, strlen(s));
    char ss[] = "Knock, knock, Neo.\n";
    write(1, ss, strlen(ss));
}
