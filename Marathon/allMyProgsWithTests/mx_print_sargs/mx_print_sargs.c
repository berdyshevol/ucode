void mx_printchar(char c);
void mx_printstr(char *s);
int mx_strcmp(char *s1, char *s2);

static void sort(char *s[], int size);
static int comparator(char *s1, char *s2);

int main(int c, char *v[]) {
    if (c <= 1)
        return 0;
    sort(&v[1], c - 1);
    for (int i = 1; i < c; i++) {
        mx_printstr(v[i]);
        mx_printchar('\n');
    }
    return 0;
}

static void sort(char *s[], int size) {
    for (int i = 0; i < size; i++) {
        int m = i;
        for (int j = i; j < size; j++)
           if (comparator(s[j], s[m]) < 0)
               m = j;
        // swap i and m
        char *t = s[i];
        s[i] = s[m];
        s[m] =t;
    }
}

static int comparator(char *s1, char *s2) {
    return mx_strcmp(s1, s2);
}

