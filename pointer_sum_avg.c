#include<stdio.h>
#include<conio.h>
void main() {
   int numArray[10];
   int i, sum = 0,n;
   printf("Enter the Size of Array (upto 10[0-9])\n");
   scanf("%d",&n);
   printf("\nEnter %d elements : \n",n);
   for (i = 0; i < n; i++)
    { 
    	printf("numArray[%d] = ",i);
		scanf("%d", (numArray+i));
		sum = sum+*(numArray+i);
	}
 
   printf("The sum of array elements : %d\n", sum);
   printf("Average of Array Elements : %.2f", (float)sum/n);
}
