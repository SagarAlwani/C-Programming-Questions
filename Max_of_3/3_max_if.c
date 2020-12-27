#include<conio.h>
#include<stdio.h>
	void main()
	{
		int max,a,b,c;\
		printf("Enter First Number\n");
		scanf("%d",&a);
		printf("Enter Second Number\n");
		scanf("%d",&b);
		printf("Enter Third Number\n");
		scanf("%d",&c);
		max=a;
		if(b>a)
		max=b;
		if(c>max)
		max=c;
		printf("Maximum of these Numbers is : %d",max);
		getch();
	}
