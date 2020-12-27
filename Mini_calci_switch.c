//Mini calculator using Switch Case
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int a,b;
		char choice;
		printf("Enter First Number\n");
		scanf("%d",&a);
		printf("Enter Second Number\n");
		scanf("%d",&b);
		fflush(stdin);
		printf("Enter Choice to perform an Opeation\n");
		scanf("%c",&choice);
		switch(choice)
		{
			case '+':
					printf("Addition of two Numbers is : %d\n",a+b);
					break;
			case '-':
					printf("Addition of two Numbers is : %d\n",a-b);
					break;
			case '*':
					printf("Addition of two Numbers is : %d\n",a*b);
					break;
			case '/':
					printf("Addition of two Numbers is : %f\n",a/b*1.0);
					break;
			case '%':
					printf("Addition of two Numbers is : %d\n",a%b);
					break;
			default	: 
					printf("Wrong Operation");		
		}
		getch();
	}
