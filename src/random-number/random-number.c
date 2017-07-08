#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generateRandomNumber(int n) {
    srand((unsigned) time(NULL));
    return rand() % n + 1;
}