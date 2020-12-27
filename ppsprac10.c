#include<conio.h>
#include<stdio.h>
	struct book
	{
		char author[20];
		char title[20];
		int nop;
		float price;
	};
	void display(struct book b);
	void main()
	{
		struct book b1;
		printf("Author\n");
		gets(b1.author);
		printf("Enter Title\n");
		gets(b1.title);
		printf("Enter no of Pages\n");
		scanf("%d",&b1.nop);
		printf("Enter price\n");
		scanf("%f",&b1.price);
		display(b1);
	}
	void display(struct book b)
	{
		printf("\n\tAuthor\tTitle\tnop\tPrice\n");
		printf("\t%s\t%s\t%d\t%f",b.author,b.title,b.nop,b.price);
	}
