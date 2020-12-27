//Notes in Amount Logic
#include<conio.h>                 //Header files
#include<stdio.h>                 //Header files
	int main()
	{
		int a;  //2000 rs note
		int b;  //500 rs note
		int c;  //200 rs note
		int d;  //100 rs note
		int e;  //50 rs note
		int f;  //20 rs note
		int g;  //10 rs note
		int h;  //5 rs note
		int i;  //2 rs coin
		int j;  //1 rs coin
		int n;  //Entered Amount
		printf("Enter the amount of rupees u have");
		scanf("%d",&n);
		a=n/2000;
		n=n-a*2000;
		b=n/500;
		n=n-b*500;                 /*notes in amount logic*/
		c=n/200;
		n=n-c*200;
		d=n/100;
		n=n-d*100;
		e=n/50;
		n=n-e*50;
		f=n/20;
		n=n-f*20;
		g=n/10;
		n=n-g*10;
		h=n/5;
 		n=n-h*5;
		i=n/2;
		j=n-i*2;
		printf("Total no of 2000 Rs. notes = %d\n",a);
		printf("Total no of 500 Rs. notes = %d\n",b);
		printf("Total no of 200 Rs. notes = %d\n",c);
		printf("Total no of 100 Rs. notes = %d\n",d);
		printf("Total no of 50 Rs. notes = %d\n",e);
		printf("Total no of 20 Rs. notes = %d\n",f);
		printf("Total no of 10 Rs. notes = %d\n",g);
		printf("Total no of 5 Rs. notes = %d\n",h);
		printf("Total no of 2 Rs. coin = %d\n",i);
		printf("Total no of 1 Rs. coin = %d\n",j);
		getch();
	}
