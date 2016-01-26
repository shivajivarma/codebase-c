[Bubble Sort](http://shivajivarma.com/code-base/c-camp/2014/12/28/sorting-algorithms-bubble-sort/)
===============

__Bubble sort__, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order.  

The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.    

The algorithm, which is a comparison sort, is named for the way smaller elements "bubble" to the top of the list. Although the algorithm is simple, it is too slow and impractical for most problems even when compared to insertion sort.  

It can be practical if the input is usually in sort order but may occasionally have some out-of-order elements nearly in position.  

> Program to perform sort on set of numbers using Bubble sort technique.

###Example
```
Enter size of the array :: 8
    
Enter elements into the array :: 5	7	6	3	10	2	4	1
    
Sorted array :: 1	2	3	4	5	6	7	10
```

###CODE
```c
void bubbleSort(int arr[],int arrSize)
{
    int i,j;
    for(j = arrSize-1; j > 0; j--)
        for(i=0; i < j; i++)
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
					arr[i] = arr[i+1];
					arr[i+1] = temp;
            }
}
```

With love,  
_Shivaji Varma_
