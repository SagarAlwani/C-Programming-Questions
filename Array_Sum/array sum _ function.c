#include<conio.h>
#include<stdio.h>
int sum_arr(int s_raga[],int size);
	void main()
	{
		int raga[20],n,sum,i;
		printf("Enter the Size of Array\n");
		scanf("%d",&n);
		printf("Enter Array Elements\n");
		for(i=0;i<n;i++)
		{
			printf("raga[%d] = ",i);
			scanf("%d",(raga+i));
		}
		sum=sum_arr(raga,n);
		printf("Sum of Array Elements = %d",sum);
	}
	int sum_arr(int s_raga[],int size)
	{
		int i,sum=0;
		for(i=0;i<size;i++)
		{
			sum=sum+*(s_raga+i);
		}
		return sum;
	}
