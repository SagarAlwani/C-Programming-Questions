#include<conio.h>
#include<stdio.h>
	int main()
	{
		int m,n,k=0;
		printf("Enter the First Number");
		scanf("%d",&m);
		printf("Enter the Second Number");
		scanf("%d",&n);
			while(k>=n)
			{
				k=m+1;
				m=m+k;
			}
			printf("The sum of The Numbers is\n:%d",m);
	}
