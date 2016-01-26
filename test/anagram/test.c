#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "program.c"

int main(){
  
  /* Valid conditions */
  if(isAnagram("test","estt") == 0) return 1;
  if(isAnagram("helloworld","wolrdheoll") == 0) return 1;

  /* Invalid conditions */
  if(isAnagram("test","estt3") == 1) return 1;
  if(isAnagram("helloworld","wklrdgheoll") == 1) return 1;
  
  return 0;
}
