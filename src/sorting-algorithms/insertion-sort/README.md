[Insertion Sort](http://shivajivarma.com/code-base/c-camp/2014/12/28/sorting-algorithms-insertion-sort/)
===============

__Insertion sort__ is a simple sorting algorithm that builds the final sorted array (or list) one item at a time.  
It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.  

> Program to perform sort on set of numbers using Insertion sort technique.

### Example
```
Enter size of the array :: 8
    
Enter elements into the array :: 5	7	6	3	10	2	4	1
    
Sorted array :: 1	2	3	4	5	6	7	10
```

### CODE
```c
void insertionSort(int arr[],int arrSize)
{
    int i,j,k;
    for(i=1; i < arrSize; i++)
        for(j=0; j < i; j++)
            if(arr[j] > arr[i])
            {
                int temp = arr[i];
                for(k=i; k > j; k--)
                    arr[k] = arr[k-1];
                arr[j]=temp;
            }
}
```

:+1: