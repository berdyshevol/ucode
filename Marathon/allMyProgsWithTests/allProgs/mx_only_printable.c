void mx_printchar(char c);

void mx_only_printable(void) {
    for (char  c = 126; c >=  ' '; c--) {
        mx_printchar(c);
    }
    mx_printchar('\n');
}

