#include<conio.h>
#include<stdio.h>
	void main()
	{
		int fact=1,n,i;
		printf("Enter a Number to Check its Factorial:\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("factorial of %d is : %d",n,fact);
		getch();
	}
