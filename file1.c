/*WACP to read and display content of FILE*/
#include<conio.h>
#include<stdio.h>
void main()
	{
		FILE *fp;
		char filename[20] ;
		printf("Enter File name Please\n");
		gets(filename);
		fp=fopen(filename,"w");
		if(fp==NULL)
			printf("File does not Exist\n");
		else
			printf("File Exists\n");	
	}
