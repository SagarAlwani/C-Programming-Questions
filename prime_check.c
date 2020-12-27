//WACP to check no is prime or not
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,flag=1;
		printf("Enter a Number to be Checked\n");
		scanf("%d",&n);
		for(i=2;i<n/2;i++)
		{
			
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		printf("%d is a Prime Number\n",n);
		else
		printf("%d is not a Prime Number\n",n);
	}
