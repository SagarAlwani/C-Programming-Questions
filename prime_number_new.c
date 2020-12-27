#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,y;
		printf("Enter a Number to be Checked if it is Prime or Not");
		scanf("%d",&n);
		while(i!=1)
		{
			y=n%i;
			i++;
		}
		if(y==0)
		printf("It is a prime Number");
		else
		printf("It is not a prime Number");
		getch();
	}
	
