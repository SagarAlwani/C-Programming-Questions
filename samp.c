#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i;
		printf("Enter value of n\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			if(n>5)
			printf("%d",i);
			else
			break;
		}
	}
