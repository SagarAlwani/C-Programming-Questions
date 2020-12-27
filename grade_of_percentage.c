#include<conio.h>
#include<stdio.h>
	int main()
	{
		int n;
		printf("Enter the Total percentage of Student");
		scanf("%d",&n);
		{
			if(n>=90)
			printf("grade is 'A' ");
			else if(n>=80)
			printf("grade is 'B' ");
			else if(n>=70)
			printf("grade is 'C' ");
			else if(n>=60)
			printf("grade is 'D' ");
		}
		getch();
	}
