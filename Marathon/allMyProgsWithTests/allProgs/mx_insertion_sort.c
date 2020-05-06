int mx_strlen(char * s1);
static int compare(char *s1, char *s2);

int mx_insertion_sort(char **arr, int size) {
    int count = 0; // dont forget
    for (int i = 1; i < size; i++) {
        int index = i;
        while ((index > 0) && (compare(arr[index - 1], arr[index]) > 0)) {
            // swap index-1 and index
            char *t = arr[index - 1];
            arr[index - 1] = arr[index];
            arr[index] = t;
            // decrement
            index--;
            count++; // dont forget
        }
    }
    return count;
}

static int compare(char *s1, char *s2) {
    return mx_strlen(s1) - mx_strlen(s2);
}

