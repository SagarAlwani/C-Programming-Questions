#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b;
		printf("Enter First Number(A)\n");
		scanf("%d",&a);
		printf("Enter Second Number(B)\n");
		scanf("%d",&b);
		a=a^b;
		b=a^b;
		a=a^b;
		printf("value of A after swap : %d\n",a);
		printf("value of B after swap : %d",b);
		getch();
	}
