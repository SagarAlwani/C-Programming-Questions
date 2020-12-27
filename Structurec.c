/*Structure Practise*/
/*CACP on Structure named Student having Members*/
#include<stdio.h>
#include<conio.h>
	struct student 
	{
		int roll;
		char name[100];
		float fees;
	}s1={102,"Alwani",50001};
	void main()
	{
		struct student s2={101,"sagar",50000};
		printf("%d\n",s1.roll);
		printf("%d\n",s2.roll);
		puts(s1.name);
		puts(s2.name);
		printf("%f\n",s1.fees);
		printf("%f\n",s2.fees);
	}
