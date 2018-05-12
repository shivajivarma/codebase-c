#include "program.c"

int main(){
  
  /* Valid conditions */
  if(isPrime(5) != 1) return 1;
  if(isPrime(7) != 1) return 1;
  if(isPrime(9) != 0) return 1;
  
  return 0;
}
