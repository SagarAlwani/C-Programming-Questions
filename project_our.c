#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
	void main()
	{
		int english;
		int maths;
		int physics;
		int chemistry;
		int ip;
		float total;
		int click;
		int sclick;
		int state;
		printf("Hello Buddy !!\n\n");
		printf("Let's Check Your Total Marks---");
		printf("\n_______________________________________________________________________________\n");
		printf("Enter Marks Scored in English(Out of 100)\n");
		scanf("%d",&english);
		printf("Enter Marks Scored in Physics(Out of 100)\n");
		scanf("%d",&physics);
		printf("Enter Marks Scored in Mathematics(Out of 100)\n");
		scanf("%d",&maths);
		printf("Enter Marks Scored in chemistry(Out of 100)\n");
		scanf("%d",&chemistry);
		printf("Enter Marks Scored in Informatics Practices(Out of 100)\n");
		scanf("%d",&ip);
		total=english+maths+ip+chemistry+physics;
		system("cls");
		printf("\n_______________________________________________________________________________\n");
		printf("\nTotal marks scored are : %.0f/500",total);
		printf("\nPercentage scored by Student is : %.2f",total/5);
		printf("\n_______________________________________________________________________________\n");
		printf("Enter 1 if u want to Check Colleges!!!\n");
		printf("\nOR,2 if u want to Exit\n");
		scanf("%d",&sclick);
		if(sclick==1)
		{
			
			printf("Pls Press Enter to Continue\n");
			getch();
			system("cls");
			printf("In Which State u Want to check Colleges\n");
			printf("Press 1 to Check Colleges in JAIPUR\n");
			printf("Press 2 to Check Colleges in AJMER\n");
			printf("Press 3 to Check Colleges in JODHPUR\n");
			printf("Press 4 to Check Colleges in BIKANER\n");
			scanf("%d",&state);
			switch(state)
		{
			case 1: 
						system("cls");		
						printf("Colleges in JAIPUR (According to R.T.U. Ranking)\n\n");
						printf("#1. S.K.I.T.,Jaipur - 819 POINTS\n");
						printf("#2. Poornima College,Jaipur - 741 POINTS\n");
						printf("#3. G.I.T.,Jaipur - 663 POINTS\n");
						printf("#4. Arya old campus,Jaipur - 634 POINTS\n");
						printf("#5. J.E.C.R.C.,Jaipur - 616 POINTS\n");
						printf("#6. Arya Ajmer Road,Jaipur - 610 POINTS\n");
						printf("\n_______________________________________________________________________________\n");
						printf("\nDo you want to check Details of any College??");
						printf("\nIf yes Press 1\n");
						scanf("%d",&click);
						break;
			case 2:		
						system("cls");	
						printf("Colleges in AJMER are :\n\n");
						printf("#1. Government Engineering College, Ajmer\n");
						printf("#2. Government Women Engineering College\n");
						printf("#3. Ajmer Institute of Technology,Ajmer\n");
						printf("#4. Aryabhatta College of Engineering & Research Centre,Ajmer\n");
						printf("#5. Venus College of Engineering,Ajmer\n");
						printf("#6. Bhagwant University, Ajmer\n");
						printf("#7. Maharshi Dayanand Saraswati University, Ajmer\n");
						printf("\n_______________________________________________________________________________\n");
						printf("\nDo you want to check Details of any College??");
						printf("\nIf yes Press 2.\n");
						scanf("%d",&click);
						break;
			case 3:		
						system("cls");
						printf("Colleges in JODHPUR are:\n\n");
						printf("#1. J.I.E.T.,Jodhpur\n");
						printf("#2. M.B.M.,Jodhpur\n");
						printf("#3. Jodhpur National University - [JNU], Jodhpur\n");
						printf("#4. Mayurakshi Institute of Engineering and Technology -[MIET], Jodhpur\n");
						printf("#5. Shri Lal Bahadur Shastri Engineering College - [SLBS], Jodhpur\n");
						printf("#6. Marwar Engineering College and Research Centre - [MECRC], Jodhpur\n");
						printf("#7 Vyas Institute of Engineering and Technology - [VIET], Jodhpur\n");
						printf("#8. Jai Narain Vyas University - [JNVU], Jodhpur");
						printf("\n_______________________________________________________________________________\n");
						printf("\nDo you want to check Details of any College??");
						printf("\nIf yes Press 3\n");
						scanf("%d",&click);
						break;
			case 4:		
						system("cls");
						printf("Colleges in Bikaner are:\n\n");
						printf("#1. Bikaner Engineering College\n");
						printf("\n_______________________________________________________________________________\n");
						printf("\nDo you want to check Details of any College??");
						printf("\nIf yes Press 4\n");
						scanf("%d",&click);
						break;
			default:
						printf("\nInvailid Input");
		}
			if(click==1)
			{
				system("cls");
			printf("Let's Check details of the Colleges in JAIPUR\n\n");
			printf("Press 1 to Contact @ S.K.I.T., Jaipur\n");
			printf("Press 2 to Contact @ Poornima College, Jaipur\n");
			printf("Press 3 to Contact @ G.I.T., Jaipur\n");
			printf("Press 4 to Contact @ Arya old campus, Jaipur\n");
			printf("Press 5 to Contact @ J.E.C.R.C.,Jaipur, Jaipur\n");
			printf("Press 6 to Contact @,Arya Ajmer Road, Jaipur\n");
			scanf("%d",&click);
			switch(click)
			{
				case 1:
							system("cls");
							printf("\tRamnagaria, Jagatpura\n\tJaipur-302 017,\n\tRajasthan\n\tIndia\n\tTel. : +91-0141- 5160400, 2759609, 2752165 & 2752167\n\tFax: +91-0141-2759555\n\tE-mail: info@skit.ac.in");
							break;				
					case 2:
							system("cls");
							printf("\tPoornima Group of Colleges (PGC)\n\tISI-2, RIICO Institutional Area\n\tSitapura, Jaipur – 302022");
							break;	
					case 3:
							system("cls");
							printf("\tContact\n\tAddress: ITS-1&2, IT Park, EPIP, Sitapura, Jaipur\n\tHelpline for Existing and pass-out students: 9278303000\n\tAdmission Help Line: 9314050477, 9783870662, 9116161234\n\tE-mail: support@gctjaipur.com,support@gitjaipur.com,admissionsgtc@gitjaipur.com\n\tSunday Open 9 am to 5 pm");
							break;
					case 4:
							system("cls");
							printf("\tARYA COLLEGE OF ENGINEERING & IT (Arya 1st Old Campus, Estd Yr 2000)\n\tSP-42, RIICO Industrial Area, Kukas, Delhi Road, Near Hotel Le-Meridian, Jaipur, Rajasthan - 302028");
							break;
					case 5:
							system("cls");
							printf("\tShri Ram ki Nangal, via Sitapura RIICO\n\tTonk Road, Jaipur-302 022\n\tB.Tech. 0141 2770232, 0141 5133338/39\n\t99283 69263, 92146 99647, 99826 82905\n\t99826 82331, 99826 82431\n\tE-mail: info@jecrcmail.com");
							break;
					case 6:
							system("cls");
							printf("\tF-29,Omaxe City, Ajmer Road,\n\tJaipur (Rajasthan) - 302026\n\tEMAIl\n\tadmission@aryacollege.org\n\tPHONE\n\t0141-5140402");
					default:
							printf("Invailid Input");
			}
		}
		else if(click==2)
{
	printf("Pls Press Enter to Continue\n");
	getch();
	system("cls");
	printf("Let's Check details of Colleges in Ajmer\n\n");
	printf("Press 1 to Contact @ Government Engineering College, Ajmer\n");
	printf("Press 2 to Contact @ Government Women Engineering College\n");
	printf("Press 3 to Contact @ Ajmer Institute of Technology,Ajmer\n");
	printf("Press 4 to Contact @ Aryabhatta College of Engineering & Research Centre,Ajmer\n");
	printf("Press 5 to Contact @ Venus College of Engineering,Ajmer\n");
	printf("Press 6 to Contact @ Bhagwant University,Ajmer\n");
	printf("Press 7 to Contact @ Maharshi Dayanand Saraswati University,Ajmer\n");
	scanf("%d",&click);
	switch(click)
	{
		case 1:
				system("cls");
				printf("\tAddress\n\tNH-8, Barliya Circle, Ajmer, Rajasthan 305025\n\tContact 	+911452971024, +911452971023\n\tMail-Ids 	All Mail-Ids\n\tEmail 	principal@ecajmer.ac.in\n\tWebsite 	www.ecajmer.ac.in");
				break;
		case 2:
				system("cls");
				printf("\tNasirabad Road Makhupura Ajmer\n\tPrincipal Email :- principal@gweca.ac.in\n\tRegistrar Email :- registrar@gweca.ac.in\n\t0145-2695535\n\t0145-2695102");
				break;
		case 3:
				system("cls");
				printf("Closed Permanenetly");
				break;
		case 4:
				system("cls");
				printf("\tBehind Mahila Kalyan Vikas Mandal, Chachiyawas,\n\tAjmer-305004,\n\tRajasthan.");
				break;
		case 5:	
				system("cls");
				printf("\tAddress:\n\tBhoyan Rathod,\n\tOpp.Iffco Adalaj,\n\tKalol Highway Road,\n\tGandhinagar–382 420\n\tContact No:\n\tPhone: 9228018001\n\tFax: +91 7940021021\n\tEmail: venusict@gmail.com");
				break;
		case 6:	
				system("cls");
				printf("\tSikar Road, Ajmer-305004, Rajasthan (INDIA)\n\tContact-+91 145-2789406,+91-6376916601, +91-6376916602, +91-6376916603, +91-6376916604\n\tFax: +91-145-2789421\n\tE-mail: unibhagwant@rediffmail.com\n\tWeb: www.bhagwantuniversity.ac.in");
				break;
		case 7:
				system("cls");
				printf("\tPUSHKAR BY-PASS ROAD, \n\tAJMER\n\tRAJASTHAN 305009\n\tPHONE: 0145 278 7056");
				break;
		default:
				printf("Invailid Input");									
	}
}
	else if(click==3)
{
	printf("Pls Press Enter to Continue\n");
	getch();
	system("cls");
	printf("Let's Check details of Colleges in Jodhpur\n\n");
	printf("Press 1 to Contact @ J.I.E.T.,Jodhpur\n");
	printf("Press 2 to Contact @ M.B.M.,Jodhpur\n");
	printf("Press 3 to Contact @ Jodhpur National University - [JNU]\n");
	printf("Press 4 to Contact @ Mayurakshi Institute of Engineering and Technology -[MIET]\n");
	printf("Press 5 to Contact @ Shri Lal Bahadur Shastri Engineering College - [SLBS]\n");
	printf("Press 6 to Contact @ Marwar Engineering College and Research Centre - [MECRC]\n");
	printf("Press 7 to Contact @ Vyas Institute of Engineering and Technology - [VIET]\n");
	printf("Press 8 to Contact @ Jai Narain Vyas University - [JNVU]\n");
	scanf("%d",&click);
	switch(click)
	{
		case 1:
				system("cls");
				printf("\tJIET Universe, NH 65, Pali Road, Jodhpur\n\tPhone:(+91) 0291-5170917 , 0291-5170918\n\tFax: 0291-2868153\n\tEmail: info@jietjodhpur.ac.in");
				break;
		case 2:
				system("cls");
				printf("\tM. B. M. Engineering College\n\tJ N Vyas University\n\n\tAir Force Area,\n\tJodhpur,\n\tRajasthan - 342011\n\n\tPhone : 0291-2551566\n\n\tEmail: tpocellmbm@gmail.com\n\n\tOpen: Monday - Friday: 8:00 AM to 1:00 PM");
				break;
		case 3:
				system("cls");
				printf("\tCollege Campus\n\tJodhpur National University\n\tJhanwar Road,Boranada\n\tJodhpur (Rajasthan) India\n\tPhone : 02931 281551 – 555\n\tFax No: 02931-281416n\tMail : info@jodhpurnationaluniversity.com\n\tWebsite : www.jodhpurnationaluniversity.com\n\n\tAdmission Office Address\n\tA-301, Anchal Complex,\n\tResidency Road, Jodhpur. 342003 Rajasthan, INDIA");
				break;
		case 4:
				system("cls");
				printf("\tMANDALNATH CHOURAHA,\n\tMAIN MATHANIA ROAD, JODHPUR.\n\tPhone : 98297 30501, 0291-2213600, 2213666\n\tEmail Id : info@mayurakshi.in, admin@mayurakshi.in\n\tCity Office : Plot No.37, Street No. 16, Triputi Nagar, Banar Road, Jodhpur (Raj.):342001.\n\tMobile : 09829705501,09829915501 ");
				break;
		case 5:	
				system("cls");
				printf("\tAddress:\n\tBhoyan Rathod,\n\tOpp.Iffco Adalaj,\n\tKalol Highway Road,\n\tGandhinagar–382 420\n\tContact No:\n\tPhone: 9228018001\n\tFax: +91 7940021021\n\tEmail: venusict@gmail.com");
				break;
		case 6:	
				system("cls");
				printf("\tMarwar Engineering College & Research Centre,\n\tHighway No. 112, P.O/Vill.- Kharda Bhandu, Barmer Road,\n\tJodhpur (Raj.) – 342001");
				break;
		case 7:
				system("cls");
				printf("\tVyas Institutes of Higher Education\n\tKudi Haud, NH-62\n\tPali Road, Jodhpur Rajasthan 342005.\n\tPhone: +91 0291-2721011-14");
				break;
		case 8:
				system("cls");
				printf("\tRegistrar\n\n\tPhone No: 0291-2649733\n\n\tCentral Office, J N Vyas University,\n\tResidency Road, Jodhpur\n\n\tPincode : 34201");
		default:
				printf("Invailid Input");									
	}
}
else if(click==4)
{
	printf("Pls Press Enter to Continue\n");
	getch();
	system("cls");
	printf("Let's Check details of Colleges in Bikaner\n\n");
	printf("Press 1 to Contact @ Bikaner Engineering College\n");
	switch(click)
	{
		case 1:
				system("cls");
				printf("\tKARNI INDUSTRIAL AREA,\n\tPUGAL ROAD BIKANER (RAJASTHAN)\n\tPIN CODE 334004\n\tContact # : +91-0151 2253404\n\tFAX # : +91-0151 2252919\n\tEmail: principal@ecb.ac.in, gecb.principal@gmail.com\n\tWebsite: www.ecb.ac.in");
				break;
	}
}
}
	else if(sclick!=1)
	system("exit");
		else
		system("exit");	
	}
