#include<stdio.h>
#define SIZE 50
	void main()
	{
		int i,n1,n2,j,saga1[SIZE],saga2[SIZE],saga3[SIZE];
		printf("Enter the Size of 1st Array\n");
		scanf("%d",&n1);
		printf("Enter Array Elements\n");
		for(i=0;i<n1;i++)
		
		{
			printf("saga1[%d] = ",i);
			scanf("%d",&saga1[i]);
		}
		printf("Enter the Size of 2nd Array\n");
		scanf("%d",&n2);
		printf("Enter Array Elements\n");
		for(i=0;i<n2;i++)
		{
			printf("saga2[%d] = ",i);
			scanf("%d",&saga2[i]);
		}
		for(i=0;i<n1;i++)
		{
			saga3[i]=saga1[i];
		}
		j=0;
		for(i=n1;i<n1+n2;i++)
		{
			saga3[i]=saga2[j];
			j++;
		}
		printf("Concated Array");
		printf("\n\n");
			for(i=0;i<n1+n2;i++)
			printf("saga3[%d] = %d\n",i,saga3[i]);
	}
