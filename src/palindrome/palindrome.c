#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 256

int isPalindrome(char *str) {
    int i, length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }

    return 1;
}

int isPalindrome2(char str[100]) {
    char revStr[100];
    strcpy(revStr, str);
    strrev(revStr);

    if (strcmp(str, revStr) == 0) {
        return 0;
    }

    return 1;
}


int main() {

    char str[MAX_LENGTH];

    printf("\n Enter a string :: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("'%s' is palindrome", str);
    } else {
        printf("'%s' is not palindrome", str);
    }

    return 0;
}