#include<conio.h>
#include<stdio.h>
	int main()
	{
		int a,b,c,d,max;
		printf("Enter the 1st Number\n");
		scanf("%d",&a);
		printf("Enter the 2nd Number\n");
		scanf("%d",&b);
		printf("Enter the 3rd Number\n");
		scanf("%d",&c);
		printf("Enter the 4th Number\n");
		scanf("%d",&d);
		{
			if(a>b)
			max=a;
			else if(a>c)
			max=a;
			else if(a>d)
			max=a;
			else if(b>a)
			max=b;
			else if(b>c)
			max=b;
			else if(b>d)
			max=b;
			else if(c>a)
			max=c;
			else if(c>b)
			max=c;
			else if(c>d)
			max=c;
		}
		getch();
		printf("The largest of the numbers is :%d",max);
	}
