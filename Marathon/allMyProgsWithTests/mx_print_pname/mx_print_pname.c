void mx_printchar(char c);
void mx_printstr(char *s);
char *mx_strchr(char *s, char c);

int main(int c, char *v[]) {
    if ( c == 0)
        return 0;

    char *s = v[0];
    char *p = mx_strchr(s, '/');
    while (p) {
        s = p + 1;
        p = mx_strchr(s, '/');
    }
    mx_printstr(s);
    mx_printchar('\n');
    return 0;
}

