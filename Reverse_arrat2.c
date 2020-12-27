#include<stdio.h>
#define SIZE 50
	void main()
	{
		int i,n,j,saga[SIZE];
		printf("Please Enter the Size of Array\n");
		scanf("%d",&n);
		printf("Please Enter Array Elements\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = ",i);
			scanf("%d",&saga[i]);
		}
		for(i=n-1,j=0;i>=0,j<n;i--,j++)
			saga[j]=saga[i];
		printf("Reversed Array is :\n");
		for(j=0;j<n;j++)
		{
			printf("saga[%d] = %d\n",j,saga[j]);
		}
	}
