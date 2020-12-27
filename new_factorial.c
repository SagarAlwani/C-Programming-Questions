#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,i,t=1;
		printf("Enter the Number\n");
		scanf("%d",&a);
		i=a;
		while(i>=1)
		{
			t=t*i;
			i--;
		}
		printf("The Answer is :%d",t);
	}
