#include<conio.h>
#include<stdio.h>
	int sum(int a,int b);                          /*Function Declaration*/
	void main()
	{
		int a,b,total;
		printf("Enter the First Number");
		scanf("%d",&a);
		printf("Enter the Second Number");
		scanf("%d",&b);
		total=sum(a,b);        /*Function call*/
		printf("The Sum of The Numbers is %d",total);
		getch();
	}
	int sum(int a,int b)                        /*Function Definition*/
	{
		int c;
		c=a+b;
		return c;
	}
