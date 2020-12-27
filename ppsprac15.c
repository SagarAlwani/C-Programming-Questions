/*Largest of 3 Numbers using if-else*/
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b,c;
		printf("Enter Value of a\n");
		scanf("%d",&a);
		printf("Enter Value of b\n");
		scanf("%d",&b);
		printf("Enter Value of c\n");
		scanf("%d",&c);
		if(a>b)
		{
			if(a>c)
			printf("a>");
			else
			printf("c>");
		}
		else
		{
			if(b>c)
			printf("b>");
			else
			printf("c>");
		}
	}
