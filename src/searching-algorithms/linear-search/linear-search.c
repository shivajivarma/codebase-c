#include <stdio.h>

int linearSearch(int arr[], int arrSize, int search) {
    int c;
    
    for (c = 0; c < arrSize; c++) {
        if (arr[c] == search)     /* if required element found */
        {
            return c;
        }
    }
    
    return -1;
}
