[Anagram](http://shivajivarma.com/code-base/c/2014/12/28/anagram/)
===============

__Anagram__ is a word or phrase formed by reordering the letters of another word or phrase, such as satin to stain.

> Program to find whether two strings are anagrams or not.

### CODE
```c
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
```

:+1:
