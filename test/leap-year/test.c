#include "program.c"

int main(){
  
  /* Valid conditions */
  if(isLeapYear(2008) != 1) return 1;
  if(isLeapYear(2400) != 1) return 1;

  /* Invalid conditions */
  if(isLeapYear(1900) == 1) return 1;
  if(isLeapYear(1563) == 1) return 1;
  
  return 0;
}
