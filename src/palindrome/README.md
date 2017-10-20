[Prime Number](https://github.com/shivajivarma/codebase-c/blob/master/src/palindrome/program.c)
=========

> Program to check whether a string is palindrome or not

### CODE
```c
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
```

:+1: