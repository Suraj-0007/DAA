#include<stdio.h>
int b_search_nonrecursive(int l[],int num,int ele){
   int l1,i,j, flag = 0;
   l1 = 0;
   i = num-1;
   while(l1 <= i){
      j = (l1+i)/2;
      if( l[j] == ele){
   		printf("\nThe element %d is present at position %d in list\n",ele,j);
         flag =1;
         break;
      }
      else
        if(l[j] < ele)
           l1 = j+1;
        else
           i = j-1;
   }
   if( flag == 0)
   printf("\nThe element %d is not present in the list\n",ele);
}
int main()
{
	int a[100],n,key,pos,i;
	printf("Enter the total elements in the array ");
	scanf("%d",&n);
	printf("enter elements into array",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search key elements");
	scanf("%d",&key);
	pos=b_search_nonrecursive(a,n,key);
}
