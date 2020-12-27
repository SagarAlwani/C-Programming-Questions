#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b,c;
		printf("Enter First Number(A)\n");
		scanf("%d",&a);
		printf("Enter Second Number(B)\n");
		scanf("%d",&b);
		printf("0 Indicates True or Success\n");
		printf("1 Indicates False or Failure\n");
		c=a>b;
		printf("Is A>B : %d\n",c);
		c=a<b;
		printf("Is A<B : %d\n",c);
		c=a>=b;
		printf("Is A>=B : %d\n",c);
		c=a<=b;
		printf("Is A<=B : %d\n",c);
		c=a==b;
		printf("Is A==B : %d\n",c);
		c=a!=b;
		printf("Is A!=B : %d\n",c);
		getch();
	}
