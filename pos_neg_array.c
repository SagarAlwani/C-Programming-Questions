#include<stdio.h>
#define SIZE 50
	void main()
	{
		int i,n,saga[SIZE],pos=0,neg=0,zero=0;
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
			if(saga[i]>0)
			pos++;
			else if(saga[i]==0)
			zero++;
			else
			neg++;
		}
		printf("No of Positive Elements in the Array are : %d\n",pos);
		printf("No of Negative Elements in the Array are : %d\n",neg);
		printf("No of Zero Elements in the Array are : %d\n",zero);
	}
