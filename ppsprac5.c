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
		struct student st[3];
		int max,l,i;
		for(i=0;i<3;i++)
		{
			printf("Enter name of %d\n",i+1);
			scanf("%s",st[i].name);
			printf("Enter Rollno of %d\n",i+1);
			scanf("%d",&st[i].roll);
			printf("Enter marks of %d\n",i+1);
			scanf("%d",&st[i].marks);
		}
		max=st[0].marks;
		for(i=0;i<3;i++)
		{
			if(st[i].marks>max)
			l=i;
		}
		printf("Highest Marks got by %s",st[l].name);
	}
