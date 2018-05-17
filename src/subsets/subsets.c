#include <stdio.h>
#include <math.h>

struct arr {
  char elem;
  int status;  // stores status whether to print the element or not (0 or 1)
} arr[' '];

int main() {
  int arrSize, i, j;

  printf("ENTER THE SIZE OF THE ARRAY:\n");
  scanf("%d", &arrSize);

  printf("\nENTER THE ELEMENTS INTO THE ARRAY:\n");
  for (i = 0; i < arrSize; i++) {
    scanf("%c", &arr[i].elem);
    if (arr[i].elem == '\n' || arr[i].elem == '\t' || arr[i].elem == ' ')
      i--;  // skip the input if it is space, tab or new line character.
  }

  printf("\nAll combinations:\n");
  for (i = 0; i < pow(2, arrSize); i++) {
    int temp = i;
    /* Converts the decimal number into binary and stores each digit in status
     * of arr */
    for (j = arrSize - 1; j >= 0; j--) {
      arr[j].status = temp % 2;
      temp = temp / 2;
    }

    printf("{ ");
    for (j = 0; j < arrSize; j++)
      if (arr[j].status)
        printf("%c ", arr[j].elem);
    printf("}\n");
  }
  return 0;
}
