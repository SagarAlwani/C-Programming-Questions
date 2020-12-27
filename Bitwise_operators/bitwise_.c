#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b;
		printf("Enter the First Number\n");
		scanf("%d",&a);
		printf("Enter the Second Number\n");
		scanf("%d",&b);
		a=a^b;
		b=a^b;
		a=a^b;
		printf("The First Number is %d\n",a);
		printf("The Second Number is %d\n",b);
		getch();
	}

