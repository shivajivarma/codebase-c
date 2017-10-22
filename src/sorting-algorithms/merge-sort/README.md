[Merge Sort](http://shivajivarma.com/code-base/2015/01/02/merge-sort/)
===============

__Merge sort__ is a sorting algorithm that sorts data items into ascending or descending order, which comes under the category of comparison-based sorting. Here we apply the divide-and-conquer strategy to sort a given sequence of data items, which can be described as follows:

* Recursively split the sequence into two halves (i.e. subsequences) until the subsequence contains only a single data item (i.e. singleton subsequence)
* Now, recursively merge these subsequences back together preserving their required order (i.e. ascending or descending order)

> Program to perform sort on set of numbers using Merge sort technique.

###Example
```
Enter size of the array :: 8
    
Enter elements into the array :: 5	7	6	3	10	2	4	1
    
Sorted array :: 1	2	3	4	5	6	7	10
```

### CODE
```c
void merge(int arr[],int low,int mid,int high)
{
    int i,j,k,l,b[20];
    l=low;
    i=low;
    j=mid+1;

    while(i <= mid && j <= high)
    {
        if(arr[i] <= arr[j]) {
            b[l] = arr[i];
            i++;
        }
        else {
            b[l] = arr[j];
            j++;
        }
        l++;
    }

    if(i > mid)
        for(k = j; k <= high; k++)
        {
            b[l] = arr[k];
            l++;
        }
    else
        for(k = i; k <= mid; k++)
        {
            b[l] = arr[k];
            l++;
        }

    for(k = low; k <= high; k++)
        arr[k] = b[k];
}

void mergeSort(int *arr,int low,int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high)/2;

        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
}
```

### Function Call
```c
mergeSort(arr, 0, arrSize-1);
```

:+1:
