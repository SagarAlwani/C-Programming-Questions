#include<conio.h>
#include<stdio.h>
	void main()
	{
		int age,max;
		char s;
		printf("Enter sex of the employee(f or m)\n");
		scanf("%c",&s);
		printf("Enter age of the employee\n");
		scanf("%d",&age);
		
		{
		
			if(s=='m'&&age>=90)
			max=4000;
			else if(s=='m'&&age>=60)                    
			max=6000;
			else if(s=='m'&&age<60)
			max=0;
			else if(s=='f'&&age>=90)
			max=3000;
			else if(s=='f'&&age>=60)
			max=5000;
			else if(s=='f'&&age<60)
			max=0;
			printf("the pension of the employee is max %d",max);
		}
	}
