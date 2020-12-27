#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b;
		a=4,b=5;
		printf("Initial Value of a = 4\n");
		printf("Initial Value of b = 5\n");
		a=a+b;
		b=a-b;
		a=a-b;
		printf("After Swap Value of a = %d\n",a);
		printf("After Swap Value of b = %d\n",b);
		getch();
	}
