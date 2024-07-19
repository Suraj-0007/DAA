#include <stdio.h>

int main() {
   int m1[5][5], m2[5][5], res[5][5];
   int i, j, k;

   printf("Enter the elements of the first 5x5 matrix:\n");
   for(i=0; i<5; i++) {
      for(j=0; j<5; j++) {
         scanf("%d", &m1[i][j]);
      }
   }

   printf("Enter the elements of the second 5x5 matrix:\n");
   for(i=0; i<5; i++) {
      for(j=0; j<5; j++) {
         scanf("%d", &m2[i][j]);
      }
   }

   for(i=0; i<5; i++) {
      for(j=0; j<5; j++) {
         res[i][j] = 0;
         for(k=0; k<5; k++) {
            res[i][j] += m1[i][k] * m2[k][j];
         }
      }
   }

   printf("Resultant matrix after multiplication:\n");
   for(i=0; i<5; i++) {
      for(j=0; j<5; j++) {
         printf("%d ", res[i][j]);
      }
      printf("\n");
   }

   return 0;
}

