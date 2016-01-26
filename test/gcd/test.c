#include "program.c"

int main(){
  
  /* Valid conditions */
  if(gcd(5,7) != 1) return 1;
  if(gcd(7,5) != 1) return 1;
  if(gcd(40,96) != 8) return 1;
  if(gcd(25,625) != 25) return 1;
  
  return 0;
}
