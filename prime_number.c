#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,a,b;
		printf("Enter the number to be checked");
		scanf("%d",&n);
		while(n%n==0)
		{
			printf("It is a Prime Number");
		}
		printf("It is not a Prime Number");
		getch();
	}
