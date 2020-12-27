/*Structure CAll by Value*/
#include<conio.h>
#include<stdio.h>
	struct book
	{
		char title[20];
		char author[20];
		int nop;
		float price;
	};
	void display(struct book b);
	void main()
	{
		struct book b1;
		printf("Enter Author\n");
		scanf("%s",b1.author);
		printf("Enter Title\n");
		scanf("%s",b1.title);
		printf("Enter nop\n");
		scanf("%d",&b1.nop);
		printf("Enter Price\n");
		scanf("%f",&b1.price);
		display(b1);
		getch();
	}
	void display(struct book b)
	{
		printf("\n\tAuthor\tTitle\tnop\tPrice\n");
		printf("\t%s\t%s\t%d\t%f",b.author,b.title,b.nop,b.price);
	}
