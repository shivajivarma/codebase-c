//
// Created by Shivaji on 1/30/2016.
//

#include <stdio.h>
#include "lib.h"

int main (int argc, char** argv) {

    char a[MAX_LENGTH], b[MAX_LENGTH];

    printf("\n Enter a string :: ");
    scanf("%s", a);

    printf("\n Enter another string :: ");
    scanf("%s", b);

    if (isAnagram(a, b)) {
        printf("'%s' and '%s' are anagrams", a, b);
    } else {
        printf("'%s' and '%s' are not anagrams", a, b);
    }

    return 0;
}