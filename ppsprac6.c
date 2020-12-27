/*Structure with use of pointer*/
#include<conio.h>
#include<stdio.h>
	struct student
	{
		char name[20];
		int roll;
		int marks;
	};
	void main()
	{
		struct student *sp,st;
		sp=&st;
		printf("Enter Name \n");
		gets(sp->name);
		printf("%s",sp->name);
	}
