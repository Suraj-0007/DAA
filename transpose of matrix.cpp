#include <stdio.h>

int main() {
   int matrix[10][10], transpose[10][10];
   int rows, cols, i, j;

   printf("Enter the number of rows in the matrix: ");
   scanf("%d", &rows);

   printf("Enter the number of columns in the matrix: ");
   scanf("%d", &cols);

   printf("Enter the elements of the matrix:\n");
   for(i=0; i<rows; i++) {
      for(j=0; j<cols; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   for(i=0; i<rows; i++) {
      for(j=0; j<cols; j++) {
         transpose[j][i] = matrix[i][j];
      }
   }

   printf("Transpose of the matrix:\n");
   for(i=0; i<cols; i++) {
      for(j=0; j<rows; j++) {
         printf("%d ", transpose[i][j]);
      }
      printf("\n");
   }

   return 0;
}

