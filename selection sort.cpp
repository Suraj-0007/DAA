#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int size);
void selection_sort(int arr[],int size);

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
   }
}
void selection_sort(int arr[],int size){
    int i,pos,temp;
    for(i=0;i<size-1;i++){
        for(pos=i+1;pos<size;pos++){
            if(arr[i]>arr[pos]){
             temp=arr[i];
             arr[i]=arr[pos];
             arr[pos]=temp;
            }
        }
	}
printf("After Selection sort Elements are : ");
display(arr,size);
}
int main(){
   int size,choice,i;
   char ch[20];
   printf("Enter size of element you want to sort: ");
   scanf("%d",&size);
   int arr[size];
   for(i=0;i<size;i++){
        printf("Enter %d Element: ",i+1);
        scanf("%d",&arr[i]);
   }
while(1){
	printf("\n1. Selection Sort\n2. Display Array.\n3. Exit\n");
    printf("\nEnter your Choice : ");
    scanf("%d",&choice);
	switch(choice){
    case 1:
        selection_sort(arr,size);
        break;
    case 2:
        display(arr,size);
        break;
    case 3:
        return 0;
    default:
        printf("\nInvalid\n");
    }
}
return 0;
}
