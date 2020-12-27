/*Nested Structure*/
#include<conio.h>
#include<stdio.h>
	struct student
	{
		char name[20];
		int rollno;
		struct dateofbirth
		{
			int dd;
			int mm;
			int yy;
		}dob;
	};
	void display(struct student st1);
	void main()
	{
		struct student st;
		printf("Enter Name :\n");
		scanf("%s",st.name);
		printf("Enter Rollno\n");
		scanf("%d",&st.rollno);
		printf("Enter DOB[DD MM YY]\n");
		scanf("%d %d %d",&st.dob.dd,&st.dob.mm,&st.dob.yy);
		display(st);
	}
	void display(struct student st1)
	{
		printf("Name : %s\nRollno : %d\nDOB : %d/%d/%d",st1.name,st1.rollno,st1.dob.dd,st1.dob.mm,st1.dob.yy);
	}
