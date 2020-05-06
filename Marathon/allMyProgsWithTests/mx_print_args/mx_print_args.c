void mx_printstr(char *);
void mx_printchar(char c);

int main(int c, char *v[]) {
    if (c < 2)
        return 0;
    for (int i = 1; i < c; i++) {
        mx_printstr(v[i]);
        mx_printchar('\n');
    }
    return 0;
}

