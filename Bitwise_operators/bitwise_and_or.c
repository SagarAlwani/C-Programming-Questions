#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b,c;
		printf("Enter First Number(A)\n");
		scanf("%d",&a);
		printf("Enter Second Number(B)\n");
		scanf("%d",&b);
		c=a&b;
		printf("Using Bitwise AND A&B = %d\n",c);
		c=a|b;
		printf("using Bitwise OR a|b = %d",c);
		getch();
	}
