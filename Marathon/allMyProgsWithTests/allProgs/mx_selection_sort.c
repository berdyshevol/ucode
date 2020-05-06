int mx_strcmp(char *s1, char *s2);
int mx_strlen(char * s1);

static int compare(char *s1, char *s2);

int mx_selection_sort(char **arr, int size) {
    int count = 0; // dont forget
    for (int i = 0; i < size; i++) {
        int m = i;
        for (int j = i; j < size; j++)
           if (compare(arr[j], arr[m]) < 0)
               m = j;
        // swap i and m
        if (i == m) continue;
        char *t = arr[i];
        arr[i] = arr[m];
        arr[m] =t;
        count++; // dont forget
    }
    return count; // dont forget
}

static int compare(char *s1, char *s2) {
    if (mx_strlen(s1) == mx_strlen(s2))
        return mx_strcmp(s1, s2);
    
    return mx_strlen(s1) - mx_strlen(s2);
}

