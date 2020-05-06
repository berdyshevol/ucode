#include <stdio.h>
#include "../libmx.h"

char *mx_file_to_str(const char *file);

int main(int n, char **s) {
   if (n < 2) return 0;
   char *s1 = mx_file_to_str(s[1]);
   printf("%s<---END_OF_FILE\n", s1);
   free(s1);
   system("leaks -q a.out");
   return 0;
}

