#include <stdio.h>

int mx_strlen(const char *s);

int main(void) {
  
  char *s = NULL;
  printf("\"NULL\" - %d\n", mx_strlen(s));

  char ss[] = "";
  printf("\"%s\" - %d\n", ss, mx_strlen(ss));

  char sss[] = "1234";
  printf("\"%s\" - %d\n", sss, mx_strlen(sss));
  return 0;
}

