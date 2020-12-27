/*WACP on Structure student comparing Percentage of two objects*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
	struct student
	{
		int roll;
		char name[100];
		float percentage;
	}s1;
	void main()
	{
		struct student s2;
		printf("Enter the roll no of First student");
		scanf("%d",&s1.roll);
		printf("Enter the Name of the First Student");
		fflush(stdin);
		gets(s1.name);
		printf("Enter the Percentage of the First Student");
		scanf("%f",&s1.percentage);
		printf("\n--------------------------------------------------------------------------------------------------\n");
		printf("Enter the roll no of Second student");
		scanf("%d",&s2.roll);
		fflush(stdin);
		printf("Enter the Name of the Second Student");
		gets(s2.name);
		printf("Enter the Percentage of the Second Student");
		scanf("%f",&s2.percentage);
		if(s1.percentage>=s2.percentage)
		printf("Congratulations!!! %s has got the Highest Percentage",s1.percentage);
		else if(s1.percentage<=s2.percentage)
		printf("Congratulations!!! %s has got the Highest Percentage",s2.percentage);
		else
		printf("Both %s and %s got Equal Percentages",s1.name,s2.name);
		getch();
	}
