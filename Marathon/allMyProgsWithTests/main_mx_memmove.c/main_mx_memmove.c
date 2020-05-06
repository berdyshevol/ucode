#include "../libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len);

int main(void) {
    char *s = "1234567890";
    char *dst = malloc(10);//&s[3];
    mx_memmove(dst, s, 3);
    dst[5] = '\0';
    printf("12345 dst=%s\n", dst);
    printf("1212345890 s=%s\n", s);
    return 0;
}

