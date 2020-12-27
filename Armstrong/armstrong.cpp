#include<conio.h>
#include<stdio.h>
	void main()
	{
		int arm=0,n,i,temp;
		printf("Enter a Number to be Checked:\n");
		scanf("%d",&n);
		temp=n;
		for(;n!=0;)
		{
			i=n%10;
			arm=arm+(i*i*i);
			n=n/10;
		}
		if(arm==temp)
		printf("%d is an Armstrong Number",arm);
		else
		printf("%d is not an Armstrong Number",arm);
		getch();
	}
