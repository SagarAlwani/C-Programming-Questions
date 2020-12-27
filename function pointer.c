#include<conio.h>
#include<stdio.h>
void fact(int a);
	void main()
	{
		int num;
		printf("Enter a Number to Print its Factorial\n");
		scanf("%d",&num);
		fact(num);
	}
void fact(int a)	
	{
		int i,fact=1;
		for(i=a;i>=1;i--)
		{
			fact=fact*i;
		}
		printf("factorial is : %d",fact);
	}
