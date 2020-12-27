#include<conio.h>
#include<stdio.h>
void display(int s_raga[],int size);
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
		printf("\nArray Elements are : \n\n");
		display(raga,n);
	}
	void display(int s_raga[],int size)
	{
		int i;
		for(i=0;i<size;i++)
			printf("raga[%d] = %d\n",i,*(s_raga+i));			
	}
