#include <stdio.h>

int main() {
   int m1[10][10], m2[10][10], sum[10][10];
   int rows, cols, i, j;

   printf("Enter the number of rows in the matrices: ");
   scanf("%d", &rows);

   printf("Enter the number of columns in the matrices: ");
   scanf("%d", &cols);

   printf("Enter the elements of the first matrix:\n");
   for(i=0; i<rows; i++) {
      for(j=0; j<cols; j++) {
         scanf("%d", &m1[i][j]);
      }
   }

   printf("Enter the elements of the second matrix:\n");
   for(i=0; i<rows; i++) {
      for(j=0; j<cols; j++) {
         scanf("%d", &m2[i][j]);
      }
   }

   for(i=0; i<rows; i++) {
      for(j=0; j<cols; j++) {
         sum[i][j] = m1[i][j] + m2[i][j];
      }
   }

   printf("Sum of the matrices:\n");
   for(i=0; i<rows; i++) {
      for(j=0; j<cols; j++) {
         printf("%d ", sum[i][j]);
      }
      printf("\n");
   }

   return 0;
}

