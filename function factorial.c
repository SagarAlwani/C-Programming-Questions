/*Return type with Arguments*/
#include<conio.h>
#include<stdio.h>
int fact(int a);
	void main()
	{
		int num,y;
		printf("Enter a Number to Print its Factorial\n");
		scanf("%d",&num);
		y=fact(num);
		printf("Factorial of %d is : %d",num,y);
	}
	int fact(int a)
	{
		int i,k=1;
		for(i=a;i>=1;i--)
		k=k*i;
		return k;
	}
