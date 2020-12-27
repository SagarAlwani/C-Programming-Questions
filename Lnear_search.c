#include<stdio.h>
#define SIZE 50
	void main()
	{
		int n,i,s,saga[SIZE],flag=0;
		printf("Please Enter Size\n");
		scanf("%d",&n);
		printf("Enter Array Elements\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = ",i);
			scanf("%d",&saga[i]);
		}
		printf("Enter Element that you want to Search\n");
		scanf("%d",&s);
		for(i=0;i<n;i++)
		{
			if(s==saga[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		printf("Yes Element is Present at Location : %d\n",i);
		else
		printf("Element not found");
	}
