#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i;
		printf("Enter Range Please..\n");
		scanf("%d",&n);
		for(i=2;i<=n;i++)
		{
			if(i==2)
			printf("%d\t",i);
			 if((i+2)%2)
			printf("%d\t",i);
		}
	}
