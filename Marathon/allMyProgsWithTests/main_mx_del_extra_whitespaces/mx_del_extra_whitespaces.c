// Oracle evaluated 61 points
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

char *mx_strtrim(const char *str);
bool mx_isspace(char c);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
void mx_strdel(char **str);
int mx_strlen(const char *s);

//static void fill_new_string(char *new_s, char *s);
static void mx_count_words(const char *str, int* count, int *length);
static bool go_through_space(char **str);
static void copy_notspace(char **new_s, char **str);

char *mx_del_extra_whitespaces(const char *str) {
    if (str == NULL)
        return NULL;
    char *s = (char *)str;
    int length = 0;
    int cwords = 0;
    mx_count_words(s, &cwords, &length);
    char *new_s;
    if (cwords == 0)
        new_s = mx_strnew(0);
    else
        new_s = mx_strnew(length + cwords);

    if (new_s == NULL)
        return NULL;
    return new_s;    
}

/**
 * copies while not isspace and if first isspace adds space. Takes care of NULL
 */
// static void fill_new_string(char *new_s, char *str) {
//     if (new_s == NULL) return;

//     if (!go_through_space(&str))
//         return;

//     copy_notspace(&new_s, &str);
//     while (go_through_space(&str)) {
//         *new_s = ' ';
//         new_s++;
//         copy_notspace(&new_s, &str);
//     }
// }

static bool go_through_space(char **str) {
    while (mx_isspace(**str) && **str) {
        (*str)++;
    }
    if (**str == '\0') return false;
    return true;
}

//copy not space
static void copy_notspace(char **new_s, char **str) {
    while (!mx_isspace(**str)) {
        **new_s = **str;
        (*new_s)++;
        (*str)++;
    }
}

/**
 * return number of words
 * length is total length of all words 
*/
#include <stdio.h>
static void mx_count_words(const char *str, int* count, int *length) {
    *length = 0;
    bool flag = true;
    *count = 0;
    while (*str) {
        if (mx_isspace(*str)) {
            flag = true;
        }
        else {
            if (flag) {
                (*count)++;
                flag = false;
            }
            (*length)++;
        }
        str++;
    }
}

