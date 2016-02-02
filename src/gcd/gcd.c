int gcd(int a, int b) {
    int c = b % a;
    if (c == 0)
        return a;
    else
        return gcd(c, a);
}
