//Programme to clculate total,average marks and %
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
	void main()
	{
		int l;    //Press 1 tocheck or 2 to exit;
		int s;    //Locations of different Colleges
		int k;       //different choices in the colleges
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
		printf("Enter 1 if u want to check nearby colleges or 2 to close it\n");
		scanf("%d",&l);
		if(l==1)
		{
		printf("For Which State u wanna Check Colleges\n:");
		printf("Press 1 to Check Colleges in JAIPUR\n");
		printf("Press 2 to Check Colleges in AJMER\n");
		printf("Press 3 to Check Colleges in JODHPUR\n");
		printf("Press 4 to Check Colleges in BIKANER\n");
		scanf("%d",&k);
		switch(k)
		{
			case 1: 
						printf("Colleges in JAIPUR (According to R.T.U. Ranking)\n");
						printf("#1. S.K.I.T.,Jaipur - 819 POINTS\n");
						printf("#2. Poornima College,Jaipur - 741 POINTS\n");
						printf("#3. G.I.T.,Jaipur - 663 POINTS\n");
						printf("#4. Arya old campus,Jaipur - 634 POINTS\n");
						printf("#5. J.E.C.R.C.,Jaipur - 616 POINTS\n");
						printf("#6. Arya Ajmer Road,Jaipur - 610 POINTS\n");
						break;
			case 2:		
						;
			case 3:		
						printf("Colleges in JODHPUR are:\n");
						printf("J.I.E.T.,Jodhpur\n");
						printf("M.B.M.,Jodhpur\n");
						break;
			case 4:		
						printf("Colleges in Bikaner are:\n");
						printf("Bikaner Engineering College\n");
						break;
			default:
						printf("Invailid Input");
			}
				printf("Press 1 to check locations and 2 to exit the process");
				scanf("%d",&s);
				if(s==1)
				{
				}
				printf("Press 1 to check Address and Contact JAIPUR colleges\n");
				printf("Press 2 to check Address and Contact AJMER Colleges\n");
				printf("Press 3 to check Address and Contact Colleges\n");
				printf("Press 4 to check Address and Contact BIKANER Colleges\n");
				scanf("%d",&s);
				switch(s)
				{
					case 1:
							printf("Press 1 to Contact @ S.K.I.T., Jaipur\n");
							printf("Press 2 to Contact @ Poornima College, Jaipur\n");
							printf("Press 3 to Contact @ G.I.T., Jaipur\n");
							printf("Press 4 to Contact @ Arya old campus, Jaipur\n");
							printf("Press 5 to Contact @ J.E.C.R.C.,Jaipur, Jaipur\n");
							printf("Press 6 to Contact @,Arya Ajmer Road, Jaipur\n");
							scanf("%d",&s);}
				switch(s)
				{
					case 1:
							printf("\tRamnagaria, Jagatpura\n\tJaipur-302 017,\n\tRajasthan\n\tIndia\n\tTel. : +91-0141- 5160400, 2759609, 2752165 & 2752167\n\tFax: +91-0141-2759555\n\tE-mail: info@skit.ac.in");
							break;				
					case 2:
							printf("\tPoornima Group of Colleges (PGC)\n\tISI-2, RIICO Institutional Area\n\tSitapura, Jaipur – 302022");
							break;	
					case 3:
							printf("\tContact\n\tAddress: ITS-1&2, IT Park, EPIP, Sitapura, Jaipur\n\tHelpline for Existing and pass-out students: 9278303000\n\tAdmission Help Line: 9314050477, 9783870662, 9116161234\n\tE-mail: support@gctjaipur.com,support@gitjaipur.com,admissionsgtc@gitjaipur.com\n\tSunday Open 9 am to 5 pm");
							break;
					case 4:
							printf("\tARYA COLLEGE OF ENGINEERING & IT (Arya 1st Old Campus, Estd Yr 2000)\n\tSP-42, RIICO Industrial Area, Kukas, Delhi Road, Near Hotel Le-Meridian, Jaipur, Rajasthan - 302028");
							break;
					case 5:
							printf("\tShri Ram ki Nangal, via Sitapura RIICO\n\tTonk Road, Jaipur-302 022\n\tB.Tech. 0141 2770232, 0141 5133338/39\n\t99283 69263, 92146 99647, 99826 82905\n\t99826 82331, 99826 82431\n\tE-mail: info@jecrcmail.com");
							break;
					case 6:
							printf("\tF-29,Omaxe City, Ajmer Road,\n\tJaipur (Rajasthan) - 302026\n\tEMAIl\n\tadmission@aryacollege.org\n\tPHONE\n\t0141-5140402");
					default:
							printf("Invailid Input");
			
							printf("")
											
				}						
			}
		}
			else 
			exit(0);								
	}
	
