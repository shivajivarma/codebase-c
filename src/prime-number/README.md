[Prime Number](http://codemons.com/codebase/prime-number/)
=========

> Program to check whether a number is prime or not

### CODE
```c
int isPrime(unsigned int number) {
    if (number <= 1) return 0; // zero and one are not prime
    unsigned int i;
    for (i=2; i*i<=number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}
```
