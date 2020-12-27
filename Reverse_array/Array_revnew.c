#include<conio.h>
#include<stdio.h>
#define SIZE 20
	void main()
	{
		int j,i,n,saga[SIZE];
		printf("Enter the Size of Array");
		sagar:
		scanf("%d",&n);
		if(n>SIZE)
		{
			printf("Please Enter Size Under %d\n",SIZE);
			goto sagar;
		}
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = ",i);
			scanf("%d",&saga[i]);
		}
		j=-1;
		for(i=0;i<(n/2);i++)
		{
			saga[i]=saga[n-i-1]^saga[i];
			saga[n-i-1]=saga[n-i-1]^saga[i];
			saga[i]=saga[n-i-1]^saga[i];
			printf("saga[%d] = %d\n",j,saga[j++]);
		}
		/*printf("After Reverse Array is\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = %d\n",i,saga[i]);
		}*/
	}
