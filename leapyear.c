#include<conio.h>                          //Header File
#include<stdio.h>                          //Header File	
	int main()
	{
		int n;
		printf("Enter the Year\n");
		scanf("%d",&n);
		{
			if(n%400==0||n%4==0&&n%100==0)                //Leap year if-else logic
			printf("It is a Leap Year");
			else
			printf("It is not a Leap Year");
		}
		getch();
	}
