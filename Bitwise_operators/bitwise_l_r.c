#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b,temp;
		printf("Enter a Number\n");
		scanf("%d",&a);
		printf("Enter no of Shifts\n");
		scanf("%d",&b);
		temp=a;
		a=a>>b;
		printf("After %d Right shifts,Entered Number changes to : %d\n",b,a);
		a=temp<<b;
		printf("After %d Left shifts,Entered Number changes to : %d",b,a);
		getch();
	}
