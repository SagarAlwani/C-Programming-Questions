#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n;
		printf("Enter a Number to check if it is a prime Number");
		scanf("%d",&n);
		if(n%n!=0)
		printf("It is a not Prime Number");
		else
		printf("It is a Prime Number");
		getch();
	}
