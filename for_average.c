#include<conio.h>
#include<stdio.h>
	void main()
	{
		int k,n,i=1,temp=0;
		printf("How many Numbers do you want to Average ?\n");
		scanf("%d",&n);
		while(i<=n)
		{
			printf("Enter %d Number\n",i);
			scanf("%d",&k);
			temp=temp+k;
			i++;
		}
		i=i-1;
		printf("Average of the Numbers is %f",temp/(i*1.0));
		getch();
	}
