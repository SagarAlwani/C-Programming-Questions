#include<conio.h>
#include<stdio.h>
int check(int a);
	void main()
	{
		int num,flag;
		printf("Enter a Number to be Checked\n");
		scanf("%d",&num);
		flag=check(num);
		if(flag==1)
		printf("EVEN");
		else
		printf("ODD");
	}
	int check(int a)
	{
		if(a%2==0)
		return 1;
		else
		return 0;
	}
