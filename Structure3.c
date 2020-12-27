/*Create a Structure*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
	void main()
	{
		struct student
		{
			char name[10];
			int age;
			int perc;
		};
		struct student st1,st2;
		
		printf("Enter the name of Student\n");
		gets(st1.name);
		printf("Enter Age of Student\n");
		scanf("%d",&st1.age);
		printf("Enter the Pecentage\n");
		scanf("%d",&st1.perc);
		printf("\t*****Details of Student*****\n");
		printf("\tName\tAge\tPercentage\n");
		printf("\t%s\t%d\t%d",st1.name,st1.age,st1.perc);
		st2=st1;
		printf("\n\t%s\t%d\t%d",st2.name,st2.age,st2.perc);
	}
