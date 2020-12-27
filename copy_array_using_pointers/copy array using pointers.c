#include<conio.h>
#include<stdio.h>
	void main()
	{
		int saga[20],raga[20];
		int i,n;
		printf("Enter the Size of Array\n");
		scanf("%d",&n);
		printf("Enter Array Elements\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = ",i);
			scanf("%d",(saga+i));
			*(raga+i) = *(saga+i);
		}
		printf("First Array\n");
		for(i=0;i<n;i++)
			printf("%d\n",*(saga+i)); 
		printf("Copied Array\n");
		for(i=0;i<n;i++)
			printf("%d\n",*(raga+i));
	}
