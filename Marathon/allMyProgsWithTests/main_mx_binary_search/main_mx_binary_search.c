#include <stdio.h>
int mx_binary_search(char **arr, int size, const char *s, int *count);

void print_arr(char **arr, int size) {
    if ( size > 0) {
        printf("\"%s\"", arr[0]);
        for (int i = 1; i < size; i++)
            printf("-\"%s\"", arr[i]);
    }
    printf("\nSize=%d\n", size);
}

int main(void) {
    //Test 0
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int n = 6;
    printf("Test 0\nGiven array:\n");
    print_arr(arr, n);
    int count = 0;
    char s[] = "ab";
    printf("Search for \"%s\"\n", s);
    int index = mx_binary_search(arr, n, s, &count); 
    printf("Return=%d and count=%d\n(should be 3, 3)\n------\n", index, count);
    
    //Test 1
    printf("Test 1\nGiven array:\n");
    print_arr(arr, n);
    count = 0;
    char s1[] = "aBc";
    printf("Search for \"%s\"\n", s1);
    index = mx_binary_search(arr, n, s1, &count); 
    printf("Return=%d and count=%d\n(should be 2, 1)\n------\n", index, count);

    //Test 2
    printf("Test 2\nGiven array:\n");
    n = 1;
    char s2[] = "222";
    printf("Given array:\n");
    print_arr(arr, n);
    count = 0;
    printf("Search for \"%s\"\n", s2);
    index = mx_binary_search(arr, n, s2, &count); 
    printf("Return=%d and count=%d\n(should be 0, 1)\n------\n", index, count);

    //Test 3
    n = 1;
    printf("Test 3\nGiven array:\n");
    print_arr(arr, n);
    count = 0;
    printf("Search for \"%s\"\n", s1);
    index = mx_binary_search(arr, n, s1, &count); 
    printf("Return=%d and count=%d\n(should be -1, 1)\n------\n", index, count);

    //Test 4
    n = 0;
    printf("Test 4\nGiven array:\n");
    print_arr(arr, n);
    count = 0;
    printf("Search for \"%s\"\n", s1);
    index = mx_binary_search(arr, n, s1, &count); 
    printf("Return=%d and count=%d\n(should be -1, 0)\n------\n", index, count);

    //Test 5
    // char *arr5[] = {};
    // n = 10;
    // printf("Test 5\nGiven array: empty\n");
    //print_arr(arr5, n);
    count = 0;
    char s5[] = "ab";
    printf("Search for \"%s\"\n", s5);
    index = mx_binary_search(arr, n, s5, &count); 
    printf("Return=%d and count=%d\n(should be 3, 3)\n------\n", index, count);

    printf("The End!");
    return 0;
}


