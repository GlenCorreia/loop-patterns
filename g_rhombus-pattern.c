#include <stdio.h>

int main() {
  int rows, i, j;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  for (i = 1; i <= rows; i++) {
    for (j = rows - i; j < rows; j++) {
      printf(" ");
    }

    for (j = rows; j >= 1; j--) { // by replacing rows here with an absolute number, we can make the number of characters appear in constant on each line
      printf(" *");
    }

    printf("\n");
  }

  return 0;
}
