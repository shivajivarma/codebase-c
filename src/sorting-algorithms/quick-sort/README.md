[Quick Sort](http://shivajivarma.com/code-base/2015/01/02/merge-sort/)
===============

__Quick sort__ is a divide and conquer algorithm. Quicksort first divides a large array into two smaller sub-array: the low elements and the high elements. Quick sort can then recursively sort the sub-arrays.  

The steps are:

* Pick an element, called a pivot, from the array.
* Reorder the array so that all elements with values less than the pivot come before the pivot, while all elements with values greater than the pivot come after it (equal values can go either way). After this partitioning, the pivot is in its final position. This is called the partition operation.
* Recursively apply the above steps to the sub-array of elements with smaller values and separately to the sub-array of elements with greater values.

> Program to perform sort on set of numbers using Quick sort technique.

### Example
```
Enter size of the array :: 8
    
Enter elements into the array :: 5	7	6	3	10	2	4	1
    
Sorted array :: 1	2	3	4	5	6	7	10
```

### CODE
```c
void swap(int *m,int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

int partition(int *a,int lower,int upper)
{
    int key,i,j;
    
	i = lower + 1;
    j = upper;
    key = a[lower];

    while(1)
    {
        while(a[i] <= key) i++;
        while(a[j] > key) j--;
        
		if(j > i)
			swap(&a[i],&a[j]);
        else {
            swap(&a[lower],&a[j]);
            break;
        }
    }
    return j;
}

void quickSort(int *arr,int lower,int upper)
{
    int i=0;
    if(upper > lower)
    {
        i = partition(arr, lower, upper);
        quickSort(arr, lower, i-1);
        quickSort(arr, i+1, upper);
    }
}
```

### Function Call
```c
quickSort(arr,0,arrSize-1);
```

:+1:
