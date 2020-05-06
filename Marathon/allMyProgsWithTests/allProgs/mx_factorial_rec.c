int mx_factorial_rec(int n) {
    if (n < 0 || n >= 13){
        return 0;
    }
    if (n == 0)
        return 1;
    return n * mx_factorial_rec(n - 1);
}

