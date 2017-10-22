[Armstrong Number](http://shivajivarma.com/code-base/2014/12/28/armstrong-number/)
===============

An __Armstrong number__ is a number such that the sum of its digits raised to the third power is equal to the number itself.  

For example, 371 is an Armstrong number, since 3^3 + 7^3 + 1^3 = 371.  
Another example, 153. 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.

> Program to find whether the given number is an Armstrong number or not.

### CODE
```c
int isArmstrong(int num) {

    int temp = num, sum = 0, digit;

    while (temp != 0) {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }

    if (num == sum)
        return 1; // Success

    return 0; // Failure
}
```

:+1:
