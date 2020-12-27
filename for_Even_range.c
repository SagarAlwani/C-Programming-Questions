#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i;
		printf("Enter the Range:\n");
		scanf("%d",&n);
		printf("Even numbers in the Range 1 to %d are :\n",n);
		for(i=1;i<=n;i++)
		{
			if(i%2==0)
			printf("%d\n",i);
		}
		getch();
	}
