//WACP to print ASCII Values of all Characters.
#include<conio.h>
#include<stdio.h>
	void main()
	{
		int i=1;
		while(i<=255)
		{
			printf("%d=%c\t",i,i);
			i++;
		}
		getch();
	}
