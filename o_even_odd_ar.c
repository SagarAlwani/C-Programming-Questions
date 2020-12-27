#include<stdio.h>
#define SIZE 50
	void main()
	{
		int n,i,saga[SIZE],o_arr[SIZE],e_arr[SIZE],o,e;
		printf("Enter the Size of Array\n");
		scanf("%d",&n);
		printf("Now Please Enter Values\n");
		for(i=0;i<n;i++)
		{
			printf("saga[%d] = ",i);
			scanf("%d",&saga[i]);
		}
		o=0,e=0;
		for(i=0;i<n;i++)
		{
			if(saga[i]%2==0)
			{
				e_arr[e]=saga[i];
				e++;	
			}
			else
			{
				o_arr[o]=saga[i];
				o++;	
			}
		}
		printf("Even Array Elements in a New Array are : \n");
		for(i=0;i<e;i++)
			printf("e_arr[%d] = %d\n",i,e_arr[i]);
		printf("Odd Array Elements in a New Array are : \n");
		for(i=0;i<o;i++)
			printf("o_arr[%d] = %d\n",i,o_arr[i]);		
	}
