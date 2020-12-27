#include<conio.h>
#include<stdio.h>
	struct student
	{
		char name[20];
		int rollno;
		float m;
	};
	void main()
	{
		struct student st;
		printf("Enter Name\n");
		gets(st.name);
		printf("Enter rollno\n");
		scanf("%d",&st.rollno);
		printf("Enter Marks\n");
		scanf("%d",&st.m);
		printf("\nName\tRollno\tMarks\t\n");
		printf("%s\t%d\t%f",st.name,st.rollno,st.m);
		getch();
	}
