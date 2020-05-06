#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int mx_read_line(char **lineptr, int buf_size, char delim, const int fd);

int main(void) {
    printf("Test mx_read_line\n");
    int fd;
    if ((fd = open("test1.txt", O_RDONLY, 0)) < 0) {
        printf("Can't open\n");
    }
    else {
        printf("Opened!\n");
        char *s;
        int res = mx_read_line(&s, 10, '@', fd);
        printf("mx_read_line res=%d\n", res);
        printf("%s\n", s);
        free(s);
        close(fd);
    }
    system("leaks -q a.out");
    return 0;
}

