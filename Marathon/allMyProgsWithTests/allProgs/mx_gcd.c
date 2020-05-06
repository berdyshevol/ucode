int mx_gcd(int a, int b) {
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    
    if (b == 0)
        return a;
    if (a == 0)
        return b;
    // base section
    if (a % b == 0)
        return b;
    // recursive section
    return mx_gcd(b, a % b);
}

