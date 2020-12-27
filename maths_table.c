#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,n,t=0;
		printf("Enter the Number to Check its Mathematical Table");
		scanf("%d",&n);
		for(i=1;i<=10;i++)
		{
			t=n*i;
			printf("%d*%d=%d\n",n,i,t);
		}
		getch();
	}
