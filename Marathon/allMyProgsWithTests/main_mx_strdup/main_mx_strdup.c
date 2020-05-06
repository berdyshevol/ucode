#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

char *mx_strdup(char *src);

int main(void) {
    // Test 1
    char *s = "Hello";
    char *newstr = mx_strdup(s);
    char *new_original_str = strdup(s);
    printf("Test 1 \"%s\"\n", s);
    assert(strcmp(newstr, new_original_str) == 0);
    printf("Test 1 passed\n");
    free(newstr);
    free(new_original_str);

    // Test 2
    char *s2 = "";
    newstr = mx_strdup(s2);
    new_original_str = strdup(s2);
    printf("Test 2: empty string \"%s\"\n", s2);
    assert(strcmp(newstr, new_original_str) == 0);
    printf("Test 2 passed\n");
    free(newstr);
    free(new_original_str);

    // Test 3
    // char *s3 = NULL;
    // //newstr = mx_strdup(s3);
    // //new_original_str = strdup(s3);
    // printf("Test 3: NULL string should return \'segmentation fault\'\n");
    // //assert(newstr == new_original_str);
    // printf("Test 3 passed\n");
    // free(newstr);
    // free(new_original_str);

    return 0;
}


