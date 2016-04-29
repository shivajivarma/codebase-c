[Linear Search](http://shivajivarma.com/code-base/c-camp/2015/01/05/searching-algorithms-linear-search/)
=============

__Linear search__, also known as sequential search, is a process that checks every element in the list sequentially until the desired element is found.  

> Program to perform search on set of numbers using Linear search technique.

###Example
```
Enter size of the array :: 8
    
Enter elements of the array :: 102 52 7 141 12 56 102 156
    
Enter the number to be searched :: 102

102 is present at location 6.
```

###CODE
```c
int linearSearch(int arr[],int arrSize,int search) {
    int c;
    for ( c = 0 ; c < arrSize ; c++ )
    {
        if ( arr[c] == search )     /* if required element found */
        {
            return c;
            break;
        }
    }
    if ( c == arrSize )
        return -1;
}
```

With love,  
_Shivaji Varma_
