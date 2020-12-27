/*Pointer of Structure*/
#include<conio.h>
#include<stdio.h>
	struct student
	{
		char name[20];
		int rollno;
		int marks;
	};
	void main()
	{
		struct student st,*sp;
		int max,i,l,n;
		sp=&st;
		printf("Enter Name of Student\n");
		scanf("%s",&(sp->name));
		printf("Enter Student's Roll no\n");
		scanf("%d",&(sp->rollno));
		printf("Enter your marks \n");
		scanf("%d",&(sp->marks));
		printf("\n\tName\tRoll\tMarks\n");
		printf("\t%s\t%d\t%d",sp->name,sp->rollno,sp->marks);
	}
