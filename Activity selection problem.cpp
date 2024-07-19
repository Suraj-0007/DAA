#include<stdio.h>

void activitySelection(int start[], int finish[], int n) {
   int i = 0, j;
   printf("Selected Activities: ");
   printf("%d ", i);

   for(j = 1; j < n; j++) {
      if(start[j] >= finish[i]) {
         printf("%d ", j);
         i = j;
      }
   }
}

int main() {
   int start[] = {1, 3, 0, 5, 8, 5};
   int finish[] = {2, 4, 6, 7, 9, 9};
   int n = sizeof(start)/sizeof(start[0]);

   // Sorting the finish time array
   int i, j, temp;
   for(i = 0; i < n; i++) {
      for(j = i + 1; j < n; j++) {
         if(finish[i] > finish[j]) {
            temp = finish[i];
            finish[i] = finish[j];
            finish[j] = temp;

            temp = start[i];
            start[i] = start[j];
            start[j] = temp;
         }
      }
   }

   activitySelection(start, finish, n);

   return 0;
}

