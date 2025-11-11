#include <stdio.h>

int main() {
  int rows, i, j;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

	for (i = 1; i <= rows; i++) {
		// Inner loop prints 'N - i' spaces
		for (j = 1; j <= rows - i; j++) {
      printf(" ");
		}
		
		// Inner loop prints 'i' characters
		for (j = 1; j <= i; j++) {
      printf("* "); // (" * works as well")
		}
		// Move to the next line
		printf("\n");
	}

  return 0;
}

/* OUTPUT: Full Pyramid

  Enter the number of rows: 5
      * 
     * * 
    * * * 
   * * * *
  * * * * *
*/
