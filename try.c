#include<stdio.h>
#include<conio.h>
int main() {
   int n,i,j;

   printf(" Enter Size..\n");
   scanf("%d",&n);   // number of rows.

   for(i = 1; i <= n; i++) {
      for(j = 1; j <= n-i; j++)
         printf(" ");

      for(j = 1; j <= i; j++)
         printf("* ");

      printf("\n");
   }
   return 1;
}
