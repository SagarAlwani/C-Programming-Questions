/*No is +ve or -ve*/
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n;
		printf("Enter a Number to be Checked\n");
		scanf("%d",&n);
		if(n>0)
		printf("+ve");
		if(n<0)
		printf("-ve");
		if(n==0)
		printf("0");
	}
