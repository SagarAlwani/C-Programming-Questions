#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b,c,flag;
		printf("Enter First Side\n");
		scanf("%d",&a);
		printf("Enter Second Side\n");
		scanf("%d",&b);
		printf("Enter Third Side\n");
		scanf("%d",&c);
		flag=(a+b>=c)&&(b+c>=a)&&(c+a>=b)?1:0;
		flag==1?printf("Valid Triangle"):printf("Invalid Triangle");
		getch();
	}
