#include<conio.h>
#include<stdio.h>
#include<string.h>
	void main()
	{
		int l1,l2,i,found;
		char a[20],b[20] ;
		printf("Enter the First String\n");
		gets(a);
		printf("Enter The Second String\n");
		gets(b);
		l1=strlen(a);
		l2=strlen(b);
		if(l1==l2)
		{
			found=0;
			for(i=0;i<=l1-1;i++)
			{
				if(a[i]!=b[i])
				found++;
				break;
			}
			if(found==0)
			printf("Both Are Equal");
			else
			printf("Both Are Not Equal");
		}
		else if(l1!=l2)
			printf("To Check The Strings The Size of Strings Must Be equal");
		getch();
	}
	
