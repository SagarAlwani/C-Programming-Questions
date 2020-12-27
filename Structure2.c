/*Input Details of Student and display it*/
/*Create a Structure*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
	void main()
	{
		struct student
		{
			char rollno[10];
			int fees;
			int DOB;
		};
		struct student st;
		
		printf("Enter the Roll no. of Student\n");
		gets(st.rollno);
		printf("Enter the Fees of Student\n");
		scanf("%d",&st.fees);
		printf("Enter the DOB\n");
		scanf("%d",&st.DOB);
		printf("\t*****Details of Student*****\n");
		printf("\tR_no\tFees\tD.O.B.\n");
		printf("\t%s\t%d\t%d",st.rollno,st.fees,st.DOB);
	}
