#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a;
		printf("Enter any Integer Value\n");
		scanf("%d",&a);
		printf("Output for any Non-Zero Value : 0\n");
		printf("Output for Zero Value : 1\n");
		a=!a;
		printf("%d",a);
		getch();
	}
