[Greatest Common Divisor](http://shivajivarma.com/code-base/c/2015/01/03/greatest-common-divisor/)
===============

The __Greatest common divisor__ (GCD) of two or more integers (at least one of which is not zero), is the largest positive integer that divides the numbers without a remainder.</p>

For example, the GCD of 8 and 12 is 4.

> Program to compute greatest common divisor.

###CODE
```c
int gcd(int a,int b) {
    if(b % a == 0)
        return a;
    else
        return gcd(c,a);
}
```

:+1: