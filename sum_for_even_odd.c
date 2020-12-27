#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,e_sum=0,o_sum=0;
		printf("Enter the Range:\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			if(i%2==0)
			e_sum=e_sum+i;
			else
			o_sum=o_sum+i;
		}
		printf("Sum of Even Numbers in the Range 1 to %d is :%d\n",n,e_sum);
		printf("Sum of Odd Numbers in the Range 1 to %d is :%d",n,o_sum);
		getch();
	}
