//C program to print Week Days
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int choice;
		printf("Enter a number to print its Week Days\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("It is Monday");
					break;
			case 2:
					printf("It is Tuesday");
					break;
			case 3:
					printf("It is Wednesday");
					break;
			case 4:
					printf("It is Thursday");
					break;
			case 5:
					printf("It is Friday");
					break;
			case 6:
					printf("It is Saturday");
					break;
			case 7:
					printf("It is Sunday");
					break;
			default: 
					printf("There are only 7 days in week,Invalid Operation");			
		}
		getch();
	}

