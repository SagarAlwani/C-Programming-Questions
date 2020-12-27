#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
	void main()
	{
		int english;
		int physics;
		int chemistry;
		int maths;
		int ip;
		int total;
		int percentage;
		int choice;
		printf("Enter marks obtained by the Student in English\n");
		scanf("%d,&english");
		printf("Enter marks obtained by the Student in physics\n");
		scanf("%d,&physics");
		printf("Enter marks obtained by the Student in chemistry\n");
		scanf("%d,&chemistry");
		printf("Enter marks obtained by the Student in maths\n");
		scanf("%d,&maths");
		printf("Enter marks obtained by the Student in ip\n");
		scanf("%d,&ip");
	    total =( english+physics+maths+chemistry+ip);
		printf("The total marks obtained by the student are %d\n",total);
		percentage = total/5;
		printf("The Percentage obtained by the student is: %d\n",percentage);
		printf("---------------------------------------------------------------\n");
		printf("Press 1 to Check Colleges for Engineering\n");
		printf("Press 2 to Exit\n");
		scanf("%d",&choice);
		if(choice==1)
		{
		printf("Welcome to the World of Engineering\n");
		printf("-------------------------------------\n");
		printf("Press 1 to check Colleges in \"JAIPUR\"\n");
		printf("Press 2 to check Colleges in \"AJMER\"\n");
		printf("Press 3 to check Colleges in \"JODHPUR\"\n");
		printf("Press 4 to check Colleges in \"BIKANER\"\n");
		scanf("%d",&choice);
		}
		switch(choice)
		{
			case 1:
					printf("---------------------------------------------------------------\n");
					printf("Colleges in Jaipur (According to R.T.U. Ranking)\n");
					printf("#1. S.K.I.T.,Jaipur - 819 POINTS\n");
					printf("#2. Poornima College,Jaipur - 741 POINTS\n");
					printf("#3. G.I.T.,Jaipur - 663 POINTS\n");
					printf("#4. Arya old campus,Jaipur - 634 POINTS\n");
					printf("#5. J.E.C.R.C.,Jaipur - 616 POINTS\n");
					printf("#6. Arya Ajmer Road,Jaipur - 610 POINTS\n");
					printf("---------------------------------------------------------------\n");
					break;
			case 2:
					printf("---------------------------------------------------------------\n");
					printf("Colleges in Ajmer:(Not Arranged According to Ramking)\n");
					printf("#1Ajmer Institute of Technology-AIT\n");
					printf("#2Aryabhatta College of Engineering and Research Centre\n");
					printf("#3Bhagwant University\n");
					printf("#4Government Engineering College Ajmer-GECA\n");
					printf("#5Government Women Engineering College Ajmer-GWECA\n");
					printf("#6St. Wilfred's Institute of Engineering and Technology\n");
					printf("#7Venus College of Engineering\n");
					printf("---------------------------------------------------------------\n");
					break;
			case 3:
					printf("---------------------------------------------------------------\n");
					printf("Colleges in Jodhpur:(Not Arranged According to Ramking)\n");
					printf("#1MBM Engineering College\n");
					printf("#2JIET Institute of Engineering & Technology for Girls\n");
					printf("#3Jodhpur Institute of Engineering & Technology\n");
					printf("#4Marwar Engineering College and Research Centre\n");
					printf("#5Marwar Institute of Technology\n");
					printf("#6Mayurakshi Institute of Engineering & Technology\n");
					printf("#7Raj Engineering College\n");
					printf("#8SLBS Engineering College\n");
					printf("#9Vyas College of Engineering & Technology\n");
					printf("#10Vyas Institute of Engineering & Technology\n");
					printf("---------------------------------------------------------------\n");
					break;
			case 4:
					printf("Colleges in Bikaner:(Not Arranged According to Ramking)\n");
					printf("College of Engineering and Technology,Bikaner\n");
					printf("Government Engineering College\n");
					printf("Manda Institute of Technology\n");
					printf("Marudhar Engineering College\n");
					printf("Government College of Engineering and Technology\n");
					printf("RNB Global University-RNBGU\n");
					printf("RNB Global University ,School of Engineering and Technology-SET\n");
					break;
			default:
					printf("Invailid Input");
		}
	}
