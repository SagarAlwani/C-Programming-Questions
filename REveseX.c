#include<stdio.h>
#define SIZE 50
	void main()
	{
		int i,n,j,saga[SIZE];
		printf("Enter the Size of Array\n");
		scanf("%d",&n);
		printf("Enter Array Elements\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = ",i);
			scanf("%d",&saga[i]);
		}
		for(i=0,j=n-1;i<j;i++,j--)
		{
				saga[j]=saga[j]^saga[i];
				saga[i]=saga[j]^saga[i];
				saga[j]=saga[j]^saga[i];

		}
			printf("Reversed Array is : \n");
			for(j=0;j<n;j++)
			printf("saga[%d] = %d\n",j,saga[j]);
	}
