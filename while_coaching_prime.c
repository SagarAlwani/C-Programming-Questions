#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i=2,prime=1;
		printf("Enter the Number to be Checked : ");
		scanf("%d",&n);
		while(i<=n/2)
		{
			if(n%i==0)
			{
				prime=0;
				break;
			}
				i++;
		}
		if(prime==1)
		printf("%d is a prime Number",n);
		else
		printf("%d is not a Prime Number",n);
		getch();
	}
