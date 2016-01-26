#include "program.c"

int main(){
  
  int arr[' '],arrSize;
  
  arr[0] = 9, arr[1] = 4, arr[2] = 15, arr[3] = 7, arr[4] = 75;
  arrSize = 5;
  selectionSort(arr,arrSize);
  if(arr[0] != 4 || arr[1] != 7 || arr[2] != 9 || arr[3] != 15 || arr[4] != 75) return 1;
  
  return 0;
}
