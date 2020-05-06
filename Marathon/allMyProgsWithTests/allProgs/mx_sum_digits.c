int mx_sum_digits(int num) {
    num  = num < 0 ? -num : num;
    if (num == 0) 
        return 0;
    return num % 10 + mx_sum_digits(num / 10);
}
