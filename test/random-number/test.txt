#include "program.c"

int main(){
  
  /* Valid conditions */
  int rand = generateRandomNumber(100);
  if(rand < 1 || rand > 100) return 1;
  
  rand = generateRandomNumber(500);
  if(rand < 1 || rand > 500) return 1;
  
  return 0;
}
