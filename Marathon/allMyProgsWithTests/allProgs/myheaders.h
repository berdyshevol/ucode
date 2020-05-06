#ifndef MYHEADERS_H
#define MYHEADERS_H

#include <stdlib.h>
#include "calculator.h"
#include "minilibmx.h"

typedef struct s_nums {
    int num1;
    int num2;
    char *arg1;
    char *arg2;
    char *arg3;
} t_nums;

void myread(t_nums * nums, int c, char *v[]);
bool check_MIN(char *s);
void to_number(char *s, int *num_ptr);
void cast_error_massage(enum e_error message);
void mycheck(t_nums * nums,t_operation *operation);
void mycalculate(t_nums *nums,t_operation *operation);
int mod(int a, int b);
int mydiv(int a, int b);
int mult(int a, int b);
int minus(int a, int b);
int sum(int a, int b);


#endif

