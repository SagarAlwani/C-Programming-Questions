#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b,c,k;
		printf("Enter value of First Number (A)\n");
		scanf("%d",&a);
		printf("Enter Value of Second Number (B)\n");
		scanf("%d",&b);
		printf("Enter Value of Third Number (C)\n");
		scanf("%d",&c);
		k=a>b?(a>c?a:c):(b>c?b:c);
		printf("%d is Maximum",k);
		getch();
	}
