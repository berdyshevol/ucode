#include <stddef.h>

#include <stdlib.h>

void mx_strdel(char **str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);
int mx_strlen(const char *);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);

char *mx_concat_words(char **words) {
    if (!words)
        return NULL;

    int i = 0;
    char *res = mx_strdup(words[0]);
    i++;
    while (words[i] != NULL) {
        char * t = res;
        // TODO: удалить res из первого заборчика
        // TODO: удалить для строчки 28, 27, 26, 25
        res = mx_strjoin(
                        res,
                        mx_strjoin(
                                   mx_strdup(" "),
                                   mx_strdup(words[i]))
                        );
        mx_strdel(&t);
        //
        i++;
    }
    return res;
}

