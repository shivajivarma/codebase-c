[Binary Search](http://shivajivarma.com/code-base/2015/01/05/binary-search/)
=============

A __Binary search__ locates an item in a sorted array by repeatedly dividing the search interval in half. The initial interval includes the entire array. If the value of the search key is less than the item in the middle of the interval, then the next interval will be the lower half of the current interval. If the value of the search key is greater than the middle item, then the next interval will be the upper half. The search process repeats until the item is found or the search interval is empty.  

Binary Search is an O(log n) algorithm, which is more efficient than a linear search for large arrays.

### Example
```
Enter size of the array :: 8

Enter elements of the array in ascending order :: 1 5 7 11 12 56 102 156

Enter the number to be searched :: 102

102 is present at location 7.
```
