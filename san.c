#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
	void main()
	{
		FILE *fp1,*fp2;
		char ch;
		fp1=fopen("C:\\sagar\\a.txt","r");
		fp2=fopen("C:\\sagar\\a.txt","w");
		if(fp1==NULL||fp2==NULL)
		{
			printf("File Does not Exist");
			getch();
			exit(0);
		}
		while(1)
		{
			ch=fgetc(f1);
			if(ch==EOF)
			{
				break;
			}
			fputc(ch,fp2);
		}
		fclose(fp1);
		fclose(fp2);
		getch();
	}
