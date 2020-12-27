#include<conio.h>
#include<stdio.h>
int main()
{	
	int a,b,c,d,e,max;
	printf("Enter 1st number\n");
	scanf("%d",&a);
	printf("Enter 2nd number\n");
	scanf("%d",&b);
	printf("Enter 3rd number\n");
	scanf("%d",&c);
	printf("Enter 4th number\n");
	scanf("%d",&d);
	printf("Enter 5th number\n");
	scanf("%d",&e);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				max=a;
				else
				max=e;
			}
	   
		else
		{
			if(d>e)
			max=d;
			else
			max=e;
		}
      }
	else
		{
			if(c>d)
			{
				if(c>e)
				max=c;
				else
				max=e;
			}
			else
			{
				if(d>e)
				max=d;
				else
				max=e;
			}
		}
		
  }
		else
		{
			if(b>c)
			{
				if(b>d)
				{
					if(b>e)
					max=b;
					else
					max=e;
				}
				else
				{
					if(d>e)
					max=d;
					else
					max=e;
				}
		   }
			else
			{
				if(c>d)
				{
					if(c>e)
					max=c;
					else
					max=e;
				}
				else
				{
					if(d>e)
					max=d;
					else
					max=e;
				}
				}	
			}
		printf("Maximum is %d",max);
		getch();
}
		
	
