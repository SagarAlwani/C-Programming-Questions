#include<conio.h>
#include<stdio.h>
	void main()
{
	struct student 
	{
		char name[10];
		int rollno;
		int perc;
	};
	struct student st[10];
	int n,i,j,max;
	printf("Enter the no of students\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the name of %d Student\n",i+1);
		scanf("%s",&st[i].name);
		printf("Enter rollno of %s\n",st[i].name);
		scanf("%d",&st[i].rollno);
		printf("Enter the percentage scored by %s\n",st[i].name);
		scanf("%d",&st[i].perc);
		printf("\n");
	}
	max=st[0].perc;
	for(i=1;i<n;i++)
	{
		if(st[i].perc>max)
		{
			max=st[i].perc;
			j=i;
		}
	}
	printf("Highest percentage got by %s that is %d",st[j].name,max);
	getch();
}
