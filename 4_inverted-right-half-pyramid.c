#include <stdio.h>

int main() {
  int rows, i, j;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  for (i = rows; i > 0; i--) {
    for (j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}

/* OUTPUT: Inverted Right Half Pyramid

  Enter the number of rows: 5
  * * * * *
  * * * * 
  * * *
  * *
  * 
*/

/* Alternate loop logic
  for (i = rows; i >= 1; i--) {
    for (j = i; j >= 1; j--) {
      printf("^ ");
    }
    printf("\n");
  }
*/