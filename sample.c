#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i=2;
		printf("Enter the Number to be Checked : ");
		scanf("%d",&n);
		while(i<=n-1)
		{
			if(n%i==0)
			break;
			i++;
		}
			if(i==n)
			printf("%d is a Prime Number",n);
			else
			printf("%d is not a Prime Number",n);
			getch();
}
	
