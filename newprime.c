#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,a,i=2,t;
		printf("Enter the Number to be Checked");
		scanf("%d",&n);
		while(i<=n-1)
		{
			a=n%i;
			if(a!=0)
			{
				t=t+a;
				i++;
			}
			else
			break;
		}
		printf("It is Not a Prime Number");
		getch();
	}
