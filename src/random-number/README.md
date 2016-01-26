Random Number
===============

> Program to generate Random number between 1 and n.

###CODE
```c
int generateRandomNumber(int n){
    srand((unsigned)time(NULL));
    return rand()%n + 1;
}
```

With love,  
_Shivaji Varma_
