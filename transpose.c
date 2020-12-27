#include <stdio.h>
int main()
{
    int A[10][10];  // Original matrix
    int B[10][10];  // Transpose matrix
    int row,col,r,c;
    printf("Enter No. of Rows of Array\n");
    scanf("%d",&r);
    printf("Enter No. of Columns of Array\n");
    scanf("%d",&c);
    /* Input elements in matrix A from user */
    printf("Enter elements in matrix of size %dx%d: \n", r,c);
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
        	printf("A[%d][%d] = ",row,col);
            scanf("%d", &A[row][col]);
        }
    }

    /*
     * Find transpose of matrix A
     */
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            /* Store each row of matrix A to each column of matrix B */
            B[col][row] = A[row][col];
        }
    }
    
    /* Print the original matrix A */ 
    printf("\nOriginal matrix: \n");
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("%d ", A[row][col]);
        }

        printf("\n");
    }
    
    /* Print the transpose of matrix A */
    printf("Transpose of matrix A: \n");
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("%d ", B[row][col]);
        }

        printf("\n");
    }

    return 0;
}
