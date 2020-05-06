int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    if (mx_gcd(a, b) == 0)
        return 0;
    return a * b / mx_gcd(a, b);
}

