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
		if(n>=2000)
		{
			a=n/2000;
			n=n-a*2000;
			printf("Total no of 2000 Rs. notes = %d\n",a);
		}
		if(n>=500)
        {
        	b=n/500;
			n=n-b*500;
			printf("Total no of 500 Rs. notes = %d\n",b);
		}
		if(n>=200)                 /*notes in amount logic*/
		{
			c=n/200;
			n=n-c*200;
			printf("Total no of 200 Rs. notes = %d\n",c);
		}
		if(n>=100)
		{
			d=n/100;
			n=n-d*100;
			printf("Total no of 100 Rs. notes = %d\n",d);
		}
		if(n>=50)
		{
			e=n/50;
			n=n-e*50;
			printf("Total no of 50 Rs. notes = %d\n",e);
		}
		if(n>=20)
		{
			f=n/20;
			n=n-f*20;
			printf("Total no of 20 Rs. notes = %d\n",f);
		}
		if(n>=10)
		{
			g=n/10;
			n=n-g*10;
			printf("Total no of 10 Rs. notes = %d\n",g);
		}
		if(n>=5)
		{
			h=n/5;
			n=n-h*5;
			printf("Total no of 5 Rs. notes = %d\n",h);
		}
		if(n>=2)
		{
			i=n/2;
			printf("Total no of 2 Rs. coin = %d\n",i);
			n=n-i*2;
		}
		if(n>=1)
		{	
			j=n-i*2;
			printf("Total no of 1 Rs. coin = %d\n",j);	
		}
	}
