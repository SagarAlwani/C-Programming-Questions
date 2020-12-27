//WACP to print Mathematical Table of any Number
#include<conio.h>
#include<stdio.h>
	int main()
	{
		int n,t,i=1;
		printf("Enter The Number to Print Table of that Number");
		scanf("%d",&n);
		while(i<=10)
		{
			t=n*i;
			printf("%d*%d=%d\n",n,i,t);
			i++;
		}
		getch();
	}
