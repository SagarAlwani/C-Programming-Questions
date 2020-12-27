

#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i,j,n;
		char ch;
		printf("Enter Range Please\n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			ch='A';
			for(j=1;j<=i;j++)
			{
				printf("%c",ch);
				ch++;
			}
			printf("\n");
		}
	}
	getch();
