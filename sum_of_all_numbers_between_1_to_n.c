//WACP to get sum of all odd numbers between 1 to n
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i=1;
		int t=0;
		printf("Check Sum of all Even Numbers between 1 to _");
		scanf("%d",&n);
		while(i<=n)
		{
			if(i%2==0)
			i++;
			else
			{
				t=t+i;
				i++;
			} 
		}
		printf("The Sum of all Odd Numbers is :%d",t);
		getch();
	}
