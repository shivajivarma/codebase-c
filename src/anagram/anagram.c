#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 256

int isAnagram(char *a, char *b) {

    int result = 1; // here '1' represents true and '0' represents false

    /* Make a copy string 'b', so that actual 'b' value is not modified while computations. */
    char *bCopy = NULL;
    bCopy = (char *) malloc(strlen(b) * sizeof(char));
    strcpy(bCopy, b);

    /* First compare lengths, if not equal then they are not anagrams. */
    if (strlen(a) == strlen(bCopy)) {

        int flag, i, j;
        /* Loop through string 'a' and find match for each character in string 'bCopy' */
        for (i = 0, flag = 0; i < strlen(a); i++) {

            for (j = 0; j < strlen(bCopy); j++) {
                if (a[i] == bCopy[j]) {
                    flag = 1; // If matching character is found, update the flag to true(1)

                    /* Delete the matching character in bCopy, so that next time we don't repeat search on it. */
                    memmove(bCopy + j, bCopy + j + 1, strlen(bCopy) - j);
                    break;
                }
            }

            if (flag == 0) {
                result = 0;
                break;
            }
        }

    } else {
        result = 0;
    }

    return result;

}

int main() {

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
