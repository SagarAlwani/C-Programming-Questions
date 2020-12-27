#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i;
		printf("Enter the number");
		scanf("%d",&n);
		for(i=1,i<=n,i++;)
		{
			printf("The ans is %d",i*i);
		}
		getch();
	}
