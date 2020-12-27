//WAP tomprint the seris 1,-3,5,-7,_______________n;
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i=1;
		printf("Enter The Number Till u Want to Print the Seris");
		scanf("%d",&n);
		while(i<=n)
		{
			if(n%2==0)
			printf("%d\n",-(2*i-1));
			else
			printf("%d\n",(2*i-1));
			i++;
		}
		getch();
	}
