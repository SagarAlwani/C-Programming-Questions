/*Create a Structure and print with use of pointer*/
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
		struct student st,*sp;
		sp=&st;
		printf("Enter the name of Student\n");
		scanf("%s",&(sp->name));
		printf("Enter Age of Student\n");
		scanf("%d",&(sp->age));
		printf("Enter the Pecentage\n");
		scanf("%d",&(sp->perc));
		printf("\t*****Details of Student*****\n");
		printf("\tName\tAge\tPercentage\n");
		printf("\t%s\t%d\t%d",(sp->name),(sp->age),(sp->perc));
	}
