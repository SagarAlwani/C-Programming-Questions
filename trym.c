#include<stdio.h>
#include<conio.h>
int main() {
   int n,i,j;

   printf(" Enter Size..\n");
   scanf("%d",&n);   // number of rows.

   for(i = 1; i <= n; i++)
   {
      for(j = n-i+1; j <= i+n-1; j++) 
      {
      	if(i<n-1&&i==j)
      printf("*");
	  }
	  printf("\n");
	}
   return 1;
}
