#include <stdio.h>
#include "leap-year.h"

int main() {

    int year;
    printf("Enter a year :: ");
    scanf("%d", &year);

    if (isLeapYear(year) == 1) {
        printf("%d is a leap year.", year);
    } else {
        printf("%d is not a leap year.", year);
    }

    return 0;
}