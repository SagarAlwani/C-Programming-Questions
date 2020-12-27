/*Passing Structure into Function Call by Value|\*/
#include<conio.h>
#include<stdio.h>
	struct book
	{
		char title[20],author[20];
		int nop;
		float price;
	};
	void display(struct book b);
	void main()
	{
		struct book b1;
		printf("Enter Title\n");
		scanf("%s",b1.title);
		printf("Enter Author\n");
		scanf("%s",b1.author);
		printf("Enter No of Pages\n");
		scanf("%d",&b1.nop);
		printf("Enter Price\n");
		scanf("%f",&b1.price);
		display(b1);
		getch();
	}
	void display (struct book b)
	{
		printf("\n\tAuthor\tTitle\tNOP\tPrice\n");
		printf("\t%s\t%s\t%d\t%f",b.author,b.title,b.nop,b.price);
	}
