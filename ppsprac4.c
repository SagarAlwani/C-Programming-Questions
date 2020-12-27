#include<conio.h>
#include<stdio.h>
	struct student
	{
		char name[20];
		char rollno[20];
		int marks;
	};
	void main()
	{
		struct student st[3];
		int i,l,max;
		for(i=0;i<3;i++)
		{
			printf("Enter the name of %d Student\n",i);
			gets(st[i].name);
			printf("Enter Rollno of %s\n",st[i].name);
			gets(st[i].rollno);
			printf("Enter the Marks of %s\n",st[i].name);
			scanf("%d",&st[i].marks);
		}
		max=st[i].marks;
		for(i=1;i<3;i++)
		{
			if(st[i].marks>max)
			l=i;
		}
		printf("Highest Marks scored by %s",st[l].name);
		getch();
	}
