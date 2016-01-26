#include "program.c"

int main(){
  
  /* Valid conditions */
  if(isArmstrong(153) == 0) return 1;
  if(isArmstrong(371) == 0) return 1;
  
  /* Invalid conditions */
  if(isArmstrong(150) == 1) return 1;
  if(isArmstrong(1150) == 1) return 1;
  
  return 0;
}
