#include<conio.h>
#include<stdio.h>
	int main()
	{
		int n;
		float k,max;
		int a=100;
		printf("Enter no of calls dialed in a month\n");
		scanf("%d",&n);
		{
			if(n>=1&&n<=100)
			max=0;
			else if(n>=101&&n<=200)
			max=0.80;
			else if(n>=201&&n<=500)
			max=0.10;
			else if(n>=501)
			max=1.20;
		}
		     k=a+max*n;
		printf("The Total Telephone Bill means Rental+Total rate is:%.2f",k);
	}
