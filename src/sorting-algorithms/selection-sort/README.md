[Selection Sort](http://shivajivarma.com/code-base/c-camp/2014/12/28/sorting-algorithms-selection-sort/)
===============

__Selection sort__ algorithm divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list.  

Initially, the sorted sublist is empty and the unsorted sublist is the entire input list.  

The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

> Program to perform sort on set of numbers using Selection sort technique.

### Example
```
Enter size of the array :: 8
    
Enter elements into the array :: 5	7	6	3	10	2	4	1
    
Sorted array :: 1	2	3	4	5	6	7	10
```

### CODE
```c
void selectionSort(int arr[],int arrSize)
{
    int i,j,k;
    for(i = 0; i <= arrSize-2; i++)
        for(j = i+1; j <= arrSize-1; j++)
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}
```

:+1: