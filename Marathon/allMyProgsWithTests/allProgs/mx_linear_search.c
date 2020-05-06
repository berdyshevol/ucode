#include <stddef.h>

int mx_strcmp(char *s1, char *s2);

int mx_linear_search(char **arr, const char *s) {
    if (arr == NULL) return -1;
    if (s == NULL) return -1;
    
    int i = 0;

    while (arr[i]) {
        if(mx_strcmp(arr[i], (char *)s) == 0)
            return i;
        i++;
    }
    return -1;
}

