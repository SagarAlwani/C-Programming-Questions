#include <stdio.h>
#include <conio.h>
	void main()
	{
   		int n,i,j;
   		printf("Enter Range Please...\n");
   		scanf("%d",&n);
   		for(i = 1; i <= n; i++) 
		{
			for(j = 1; j <= n-i; j++)
        	printf(" ");
      		for(j = 1; j <= i; j++)
     		{
      		printf("* ");
			}
			printf("\n");
   		}
	}
