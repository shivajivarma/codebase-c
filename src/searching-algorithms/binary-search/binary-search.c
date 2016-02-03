int binarySearch(int arr[], int arrSize, int search) {
    int low = 0, high = arrSize - 1, pos = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (search == arr[mid]) {
            pos = mid;
            break;
        } else if (search < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (pos != -1) {
        return pos;
    } else {
        return -1;
    }
}