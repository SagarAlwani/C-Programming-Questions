#include<conio.h>
#include<stdio.h>
	void main()
	{
		int n,i,count=0,temp;
		printf("Enter the Range Please..\n");
		scanf("%d",&n);
		temp=n;
		i=2;
		while((n%i!=0&&n!=i)&&i<=n)
		{
			count++;
			i++;
			if(count==(temp-2))
			break;
		}
		printf("%d is a Prime Number",n );
}
