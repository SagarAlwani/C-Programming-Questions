#include<stdio.h>
#define SIZE 50
	void main()
	{
		int n,i,saga1[SIZE],saga2[SIZE];
		printf("Enter the Size of Array\n");
		scanf("%d",&n);
		printf("Now Please Enter Values\n");
		for(i=0;i<n;i++)
		{
			printf("saga1[%d] = ",i);
			scanf("%d",&saga1[i]);
		}
		for(i=0;i<n;i++)
			saga2[i]=saga1[i];
			printf("Now (After Copy) Array Elements of Array saga2 are:\n");
		for(i=0;i<n;i++)
			printf("saga2[%d] = %d\n",i,saga2[i]);
	}
