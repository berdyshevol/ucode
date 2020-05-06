#include "minilibmx.h"
#include "calculator.h"
#include "myheaders.h"

int main(int c, char *v[]) {
    t_nums *nums = malloc(sizeof(t_nums));
    if (nums == NULL) exit(1);

    t_operation *operation = malloc(sizeof(t_operation));
    if (operation == NULL) exit(1);

    myread(nums, c, v);
    mycheck(nums, operation);
    mycalculate(nums, operation);
    
    return 0;
}

void myread(t_nums * nums, int c, char *v[]) {
    if (c != 4) {
        cast_error_massage(INCORRECT_OPERAND);
    }
    else {
        nums->arg1 = v[1];
        nums->arg2 = v[2];
        nums->arg3 = v[3];
    }
}

void mycheck(t_nums * nums,t_operation *operation) {
    to_number(nums->arg1, &nums->num1);
    to_number(nums->arg3, &nums->num2);
    
    if (mx_strcmp(nums->arg2, "+") == 0) {
        operation->op = '+';
        operation->f = sum;
    }
    else if (mx_strcmp(nums->arg2, "-")== 0) {
        operation->op = '-';
        operation->f = minus;
    }
    else if (mx_strcmp(nums->arg2, "*")== 0) {
        operation->op = '*';
        operation->f = mult;
    }
    else if (mx_strcmp(nums->arg2, "/")== 0) {
        operation->op = '/';
        operation->f = mydiv;
    }
    else if (mx_strcmp(nums->arg2, "%")== 0) {
        operation->op = '%';
        operation->f = mod;
    }
    else
        cast_error_massage(INCORRECT_OPERATION);

}

void to_number(char *s, int *num_ptr) {
    int sign = 1;
    int n = 0;
    int i = 0;
    if (s[i] == '-') {
        if (check_MIN(s+1)) {
            *num_ptr =  -2147483648;
            return;
        }
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
        i++;
    
    for (; s[i] != '\0'; i++) {
        if (!(s[i] >= '0' && s[i] <= '9'))
            cast_error_massage(INCORRECT_OPERAND);
        n = 10 * n + s[i] - '0';
    }
    *num_ptr = sign * n;
}

bool check_MIN(char *s) {
    char min_int[] = "2147483648";
    int i = 0;
    while (s[i] == min_int[i])  {
        if (s[i] == '\0')
            return true;
        s++;
    }
    return false;
}

void cast_error_massage(enum e_error message) {
    char msg1[] = "invalid number\n";
    char msg2[] = "invalid operation\n";
    char msg3[] = "division by zero\n";
    if (message == INCORRECT_OPERAND) {
        write(2, msg1, mx_strlen(msg1));
    }
    else if (message == INCORRECT_OPERATION) {
        write(2, msg2, mx_strlen(msg2));
    } else if (message == DIV_BY_ZERO) {
        write(2, msg3, mx_strlen(msg3));
    }
    exit(1);
}

void mycalculate(t_nums *nums,t_operation *operation) {
    mx_printint(operation->f(nums->num1, nums->num2));
    mx_printchar('\n');
}

int sum(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int mydiv(int a, int b) {
    if (b == 0)
        cast_error_massage(DIV_BY_ZERO);
    return a / b;
}

int mod(int a, int b) {
    if (b == 0)
        cast_error_massage(DIV_BY_ZERO);
    return a % b;
}

