#include<conio.h>
#include<stdio.h>
	void main()
	{
		char k,l;
		k='a',l='A';
		l=l+32;
		k=k-32;
		printf("Initially k (In Lower case) = a\n");
		printf("After Operation k (In Upper case) = %c\n",k);
		printf("Initially l (In Upper case) = A\n");
		printf("After Operation l (In lower case) = %c",l);
		getch();
	}
