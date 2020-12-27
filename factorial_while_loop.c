#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,t,i;
		printf("Enter the Number\n");
		scanf("%d",&a);
		i=a;
		while(i!=1)
		{
			t=i-1;
			a=a*t;
			i--;
		}
		printf("The Answer is :%d",a);
	}
