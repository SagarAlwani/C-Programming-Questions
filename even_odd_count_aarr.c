#include<stdio.h>
#define SIZE 50
	void main()
	{
		int i,n,saga[SIZE],o=0,e=0;
		printf("Please Enter the Size of Array\n");
		scanf("%d",&n);
		printf("Please Enter Array Elements\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = ",i);
			scanf("%d",&saga[i]);
		}
		for(i=0;i<n;i++)
		{
			if(saga[i]%2==0)
			e++;
			else
			o++;
		}
		printf("No of Even Elements in the Array are : %d\n",e);
		printf("No of Odd Elements in the Array are : %d",o);
	}
