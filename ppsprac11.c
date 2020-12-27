/*File Handling using call by ref*/
#include<conio.h>
#include<stdio.h>
	struct book
	{
		char author[20];
		char title[20];
		int nop;
	};
	void display(struct book *bp);
	void main()
	{
		struct book b1;
		printf("Enter Author\n");
		scanf("%s",b1.author);
		printf("Enter Title\n");
		scanf("%s",b1.title);
		printf("Enter nop\n");
		scanf("%d",b1.nop);
		display(&b1);
	}
	void display(struct book *bp)
	{
		printf("\n\tAuthor\tTitle\tnop\n");
		printf("\t%s\t%s\t %d",bp->author,bp->title,bp->nop);
	}
	
