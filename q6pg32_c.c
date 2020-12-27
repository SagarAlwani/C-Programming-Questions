#include<conio.h>
#include<stdio.h>
	int main()
	{
		int a,b,c,max,k;
	    printf("Enter 1st Number\n");
		scanf("%d",&a);
		printf("Enter 2nd Number\n");
		scanf("%d",&b);
		printf("Enter 3rd Number\n");
		scanf("%d",&c);
		{
			if(a>b)
			{
				if(a>c)
				max=a;
				else
				max=c;
			}
			else
			{
				if(b>c)
				max=b;
				else
				max=c;
			}
		}
		{
			if(max==c&&c>b&&b>a)
			k=b;
			else if(max==a&&a>b&&b>c)
			k=b;
			else if(max==c&&c>a&&a>b)
			k=a;
			else if(max==a&&a>c&&c>b)
			k=c;
			else if(max==b&&b>c&&c>a)
			k=c;
			else if(max==b&&b>a&&a>c)
			k=a;
		}
		printf("the 2nd largest number is:%d",k);
	}
