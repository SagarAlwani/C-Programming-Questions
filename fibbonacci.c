#include<conio.h>
#include<stdio.h>
	void main()
	{
		int t1=0,t2=1,t3,count=0,n;
		printf("Enter the term till u want to print Series\n");
		scanf("%d",&n);
		while(count!=n)
		{
			t3=t1+t2;
			printf("%d",t1);
			t1=t2;
			t2=t3;
			count++;
		}
	}
