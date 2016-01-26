#include <stdio.h>

int binarySearch(int arr[],int arrSize,int search) {
    int low = 0, high = arrSize-1,pos = -1;

    while(low <= high) {
        int mid = (low+high)/2;
        if(search == arr[mid]) {
            pos = mid;
            break;
        } else if(search < arr[mid]) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }

    if(pos != -1)
        return pos;
    else
        return -1;
}

/*

int main() {
    int arr[' '], arrSize, search, i;

    printf("Enter size of the array ::");
    scanf("%d",&arrSize);

    printf("\nEnter elements of the array in ascending order::\n");
    for(i=0; i<arrSize; i++)
        scanf("%d",&arr[i]);

    printf("Enter the number to be searched ::\n");
    scanf("%d",&search);

    int c=binarySearch(arr,arrSize,search);

    if(c!=-1) printf("%d is present at location %d.\n", search, c+1);
    else printf("%d is not present in array.\n", search);

    return 0;
}

*/
