#include<stdio.h>
#define SIZE 50
	void main()
	{
		int n,i,saga[SIZE],max,min;
		printf("Enter the Size of the Array\n");
		scanf("%d",&n);
		printf("Now Please Enter Values\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = ",i);
			scanf("%d",&saga[i]);
		}
		max=saga[0];
		min=saga[0];
		for(i=1;i<n;i++)
		{
			if(saga[i]>max)
			max=saga[i];
			else if(saga[i]<min)
			min=saga[i];
		}
		printf("The Maximum in the Array is : %d\n",max);
		printf("The Minimum in the Array is : %d",min);
	}
