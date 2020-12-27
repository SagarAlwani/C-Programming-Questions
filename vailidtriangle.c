//to check the angles in the triangle are vailid or not;
#include<conio.h>                //Header Files
#include<stdio.h>                //Header Files
	int main()
	{
		int a,b,c;
		printf("Enter the First angle\n");
		scanf("%d",&a);
		printf("Enter the Second angle\n");
		scanf("%d",&b);
		printf("Enter the Third angle\n");
		
		scanf("%d",&c);
		{
			if ((a+b+c==180)&&(a!=0&&a!=180&&b!=0&&b!=180&&c!=0&&c!=180))           //Triangles Logic
			printf("It is a vailid Triangle");
			else
			printf("It is not a vailid Triangle");
		}
		getch();   //To hold output screen
	}
	
