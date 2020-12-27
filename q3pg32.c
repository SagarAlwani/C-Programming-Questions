#include<conio.h>                      //header files
#include<stdio.h>                      //header files
	int main()
	{
		int a,b,c,max;
		printf("Enter 1st Number\n");
		scanf("%d",&a);
		printf("Enter 2nd Number\n");
		scanf("%d",&b);
		printf("Enter 3rd Number\n");
		scanf("%d",&c);
		{
			if(a>b)
			{
				if(a>c)                                          //if-else logic statement
				max=c;
				else
				max=a;
			}
			else
			{
				if(b>c)
				max=b;
				else
				max=c;
				
			}
		}
		printf("the largest number is %d",max);                  //created function definition max is used here to reduce code length every timr
	}
	
	
