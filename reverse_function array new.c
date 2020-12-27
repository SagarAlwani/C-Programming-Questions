#include<conio.h>
#include<stdio.h>
void revers(int s_raga[],int size);
	void main()
	{
		int raga[20],n,i;
		printf("Enter the Size of Array\n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("raga[%d] = ",i);
			scanf("%d",&raga[i]);
		}
		printf("\nReversed Elements are : \n\n");
		revers(raga,n);
	}
	void revers(int s_raga[],int size)
	{
		int i;
		for(i=0;i<size/2;i++)
		{
			s_raga[i]=s_raga[size-i-1];			
		}
		for(i=0;i<size;i++)
		{
			printf("raga[%d] = ",i);
			scanf("%d",&s_raga[i]);
		}
	}
