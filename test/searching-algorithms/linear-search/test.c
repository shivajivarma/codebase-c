#include "program.c"

int main(){
  
  int arr[' '],arrSize;
  
  arr[0] = 205, arr[1] = 42, arr[2] = 15, arr[3] = 75, arr[4] = 109;
  arrSize = 5;
  if(linearSearch(arr, arrSize, 109) != 4) return 1;
  
  return 0;
}
