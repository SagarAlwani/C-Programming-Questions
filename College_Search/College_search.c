//Programme to clculate total,average marks and %
#include<conio.h>
#include<stdio.h>
	void main()
	{
		char ch;
		char local;
		char city;
		int e;  //English
		int p;   //Physics
		int c;   //Chemistry
		int m;   //Maths
		int ip;  //Information Practices
		float x,y;    //Average+Total+Percentage
		printf("Enter marks scored in English\n");
		scanf("%d",&e);
		printf("Enter marks scored in Physics\n");
		scanf("%d",&p);
		printf("Enter marks scored in Chemistry\n");
		scanf("%d",&c);
		printf("Enter marks scored in Mathematics\n");
		scanf("%d",&m);
		printf("Enter marks scored in Information Practices\n");
		scanf("%d",&ip);
		x=e+p+c+m+ip;
		printf("The total Marks scored : %f\n",x);
		y=x/5;
		printf("The Average Marks scored : %f\n",y);
		y=(x/500)*100;
		printf("The Percentage scored : %f\n",y);
		printf("Enter 'y' if u want to check nearby colleges or 'n' to close it\n");
		scanf("%ch",&ch);
		{
			if(ch=='y')
			printf("Let's check Near by colleges\n");
			printf("Enter ur Locality");
			printf("Press J/j for Jaipur");
			printf("Press A/a for Ajmer");
			scanf("%ch",&local);
			{
				if(ch=='A'||ch=='a')
				printf("Colleges in Ajmer are");
				printf("Government Engineering College,Nareli,Ajmer");
				printf("Government Engineering College for Girls,Aadesh Nagar,Ajmer");
				else if(ch=='J'||ch=='j')
				printf("Colleges in Jaipur are ( Private Colleges according to R.T.U. Ranking)");
				printf("S.K.I.T.,Sitapura,jaipur");
				printf("J.E.C.R.C. College,Sitapura,japiur");
			}
			else
			printf("Invailid Input");
		}
	}
