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
			{
				if(a>c)
				{
					if(a>d)
					max=a;
					else
					max=d;
				}
				else
				{
					if(c>d)
					max=c;
					else
					max=d;
				}
			}
			else
			{
				if(b>c)
				{
					if(b>d)
					max=b;
					else
					max=d;
				}
				else
				{
					if(c>d)
					max=c;
					else
					max=d;
				}
			}
		}
		getch();
		printf("The largest Number is:%d",max);
	}
