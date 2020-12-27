#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i=1, beat=-1;
		printf("Enter the Number till u want to print\n");
		scanf("%d",&n);
		while(i<=n)
		{
			beat=-beat;
			printf("%d\n",beat);
			i++;
		}
		getch();
	}
