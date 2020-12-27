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
		printf("Enter Choice to perform an Operation\n");
		scanf("%c",&choice);
		if(choice=='+')
			printf("Addition of two Number is : %d",a+b);
		else if(choice=='-')
			printf("Subtraction of two Number is : %d",a-b);
		else if(choice=='*')
			printf("Multiplication of two Number is : %d",a*b);
		else if(choice=='/')
			printf("Division of two Number is : %f",a/b*1.0);
		else if(choice=='%')
			printf("Remainder of two Number is : %d",a%b);
		else
		printf("Wrong Operation");
		getch();
	}
