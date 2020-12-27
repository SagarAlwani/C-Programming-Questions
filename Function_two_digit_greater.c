#include<stdio.h>
#include<conio.h>
int max(int,int);
void main()
{
		int a,b,c;
		printf("Enter the two number\n");
		scanf("%d %d",&a,&b);
		c=max(a,b);
		printf("Ans is %d",c);
		getch();
		
}
int max(int x,int y)
{
	int o;
	o = (x>y)?x:y;
	return o;
}
