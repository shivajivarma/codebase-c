#include <stdio.h>
#include <stdlib.h>
#include "random-number.h"


int main() {
    int c, n;
    printf("Random number in [1,100]\n"); 
    printf("%d\n", generateRandomNumber(100));
	return 0;
}