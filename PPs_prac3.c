/*Structure input output Program*/
#include<conio.h>
#include<stdio.h>
	struct student
	{
		char name[20];
		char rollno[20];
		float marks;
	};
	void main()
	{
		struct student st;
		printf("Please Enter Name\n");
		gets(st.name);
		printf("Enter Rollno(char)\n");
		gets(st.rollno);
		printf("Please Enter marks\n");
		scanf("%f",&st.marks);
		printf("\n\tName\tRollno\tMarks\n");
		printf("\t%s\t%s\t%f",st.name,st.rollno,st.marks);
		getch();
	}
