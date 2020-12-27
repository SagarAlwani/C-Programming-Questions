#include<conio.h>
#include<stdio.h>
	void main()
	{
		int m,n,i;
		i=n-1;
		printf("Enter the First Number");
		scanf("%d",&m);
		printf("Enter the Second Number");
		scanf("%d",&n);
		while(i>=m)
		{
			n=n+i;
			i--;
		}
		printf("The sum of the Seris is :%d",n);
		getch();   
	}

