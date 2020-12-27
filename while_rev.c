#include<conio.h>
#include<stdio.h>
	void main()
	{
		int rev=0,n,i;
		printf("Enter a Number to be Reversed:\n");
		scanf("%d",&n);
		while(n!=0)
		{
			i=n%10;
			rev=rev*10+i;
			n=n/10;
		}
		printf("Reversed Number is : %d\n",rev);
		getch();
	}
