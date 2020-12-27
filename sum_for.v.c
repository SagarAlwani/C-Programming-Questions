#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,n,t=0;
		printf("Enter the Number till u want to get sum of Odd Numbers");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			if(i%2!=0)
			t=t+i;
		}
		printf("The sum of the Digits  is : %d",t);
	}
