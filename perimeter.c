// c programme to find perimeter of rectangle.
#include<stdio.h>
#include<conio.h>
	void main()
	{
		int l,b,p;
		printf("Enter Length of the Rectangle\n");
		scanf("%d",&l);
		printf("Enter Breadth of the Rectangle\n");
		scanf("%d",&b);
		p=2*(l+b);
		printf("The Perimeter of the Rectangle is:%d\n",p);
		getch();	
	}

