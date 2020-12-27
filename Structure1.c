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
		struct student st;
		
		printf("Enter the name of Student\n");
		gets(st.name);
		printf("Enter Age of Student\n");
		scanf("%d",&st.age);
		printf("Enter the Pecentage\n");
		scanf("%d",&st.perc);
		printf("\t*****Details of Student*****\n");
		printf("\tName\tAge\tPercentage\n");
		printf("\t%s\t%d\t%d",st.name,st.age,st.perc);
	}
