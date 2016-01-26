#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generateRandomNumber(int n){
    srand((unsigned)time(NULL));
    return rand()%n + 1;
}

/*
int main() {
    int c, n;
    printf("Random number in [1,100]\n"); 
    printf("%d\n", generateRandomNumber(100));
return 0;
}
*/
