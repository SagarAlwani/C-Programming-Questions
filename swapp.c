#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b,c;
		printf("Enter 1st Number\n");
		scanf("%d",&a);
		printf("Enter 2nd Number\n");
		scanf("%d",&b);
		c=a;
		a=b;
		b=c;
		printf("First Number is %d\n",a);
		printf("2nd Number is %d\n",b);
		getch();
	}
