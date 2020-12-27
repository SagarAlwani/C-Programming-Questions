#include<conio.h>
#include<stdio.h>
/*Structure Starting*/
	struct student
	{
		char name[20];
		int rollno;
		float marks;
	};
	void main()
	{
		struct student st;
		printf("Enter the Roll no\n");
		scanf("%d",&st.rollno);
		printf("Enter Name\n");
		scanf("%s",st.name);
		printf("Enter marks\n");
		scanf("%f",&st.marks);
		printf("\n\tRollno\tName\tMarks\n");
		printf("\t%d\t%s\t%f",st.rollno,st.name,st.marks);
		getch();
	}
