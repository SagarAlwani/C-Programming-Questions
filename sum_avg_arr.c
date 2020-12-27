#include<stdio.h>
#define SIZE 50
	void main()
	{
		int n,i,saga[SIZE],sum=0;
		printf("Enter the Size of the Array\n");
		scanf("%d",&n);
		printf("Now Please Enter Values\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = ",i);
			scanf("%d",&saga[i]);
		}
		for(i=0;i<n;i++)
		{
			sum=sum+saga[i];
		}
		printf("The Sum of the Array is : %d\n",sum);
		printf("The Avg. of the Array is : %.2f",(1.0)*sum/n);
	}
