#include <stdio.h>

int isPrime(unsigned int number) {
    if (number <= 1) return 0; // zero and one are not prime
    unsigned int i;
    for (i=2; i*i<=number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}
