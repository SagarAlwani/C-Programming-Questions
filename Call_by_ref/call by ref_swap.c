 /*Call by reference Swapping*/
#include<conio.h>
#include<stdio.h>
int swap_ref(int *a,int *b);
	void main()
	{
		int num1,num2;
		printf("Enter the First number(num1)\n");
		scanf("%d",&num1);
		printf("Enter the Second number(num2)\n");
		scanf("%d",&num2);
		swap_ref(&num1,&num2);
	}
	int swap_ref(int *a,int *b)
	{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
		printf("num1 = %d\n",*a);
		printf("num2 = %d",*b);
	}
