#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,c;
		printf("Enter a Number(A)\n");
		scanf("%d",&a);
		c=a++;
		printf("For Post-increament (A++) value is : %d\n",c);
		c=++a;
		printf("For Pre-increament (++A) value is : %d\n",c);
		c=a--;
		printf("For Post-decreament (A--) value is : %d\n",c);
		c=--a;
		printf("For Pre-decreament (--A) value is : %d",c);
		getch();
	}
		
