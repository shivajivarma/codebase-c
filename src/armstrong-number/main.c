#include <stdio.h>
#include "armstrong-number.h"

int main(int argc, char **argv) {

    int n;

    printf("Enter number : ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("\n'%d' is an armstrong number", n);
    else
        printf("\n'%d' is not an armstrong number", n);

    return 0;
}