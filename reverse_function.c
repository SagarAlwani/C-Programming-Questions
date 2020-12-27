#include<conio.h>
#include<stdio.h>
int rev(int a);
	void main()
	{
		int k,ok;
		printf("Enter a Number to be Reversed\n");
		scanf("%d",&k);
		ok=rev(k);
		printf("Reverse of this Number is : %d",ok);
	}
	int rev(int a)
	{
		int num,m;
		while(a!=0)
		{
			m=a%10;
			num=num*10+m;
			a=a/10;
		}
		return num;
	}
