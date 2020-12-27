#include<conio.h>
#include<stdio.h>
	void main()
	{
		int count=0,n,i;
		printf("Enter a Number to be Checked:\n");
		scanf("%d",&n);
		for(i=n;n!=0;n=n/10)
		{
			count++;
		}
		printf("%d is a %d digit Number\n",i,count);
		getch();
	}
