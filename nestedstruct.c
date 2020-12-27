/*C program to demonstrate example of nested structure*/
#include <stdio.h>
#include<conio.h>
	void main()
{
	struct student
{
	char name[30];
	int rollno;
	
	struct dateofbirth
	{
		int dd;
		int mm;
		int yy;
	}DOB;	/*created structure varoable DOB*/
};
	struct student std;
	printf("Enter name: "); 		
	gets(std.name);
	printf("Enter roll number: ");	
	scanf("%d",&std.rollno);
	printf("Enter Date of Birth [DD MM YY] format: ");
	scanf("%d%d%d",&std.DOB.dd,&std.DOB.mm,&std.DOB.yy);
	printf("\nName : %s \nRollno : %d \nDOB : %d/%d/%d\n",std.name,std.rollno,std.DOB.dd,std.DOB.mm,std.DOB.yy);
}
