#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b,c;
		printf("Enter First Side\n");
		scanf("%d",&a);
		printf("Enter Second Side\n");
		scanf("%d",&b);
		printf("Enter Third Side\n");
		scanf("%d",&c);
		(a+b>=c)&&(b+c>=a)&&(c+a>=b)?printf("It is a Vailid Triangle"):printf("It is not a Vailid Triangle");
		getch();
	}
