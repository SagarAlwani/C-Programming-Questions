#include <stdio.h>
#define SIZE 100       // Maximum array size

int main()
{
    int saga[SIZE], reverse[SIZE];
    int size, i, arrIndex, revIndex;

    /* Input size of the array */
    printf("Enter size of the array:\n");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in array:\n");
    for(i=0; i<size; i++)
    {
    	printf("saga[%d] = ",i);
        scanf("%d", &saga[i]);
    }

    revIndex = 0;
    arrIndex = size - 1;
    while(arrIndex >= 0)
    {
        /* Copy value from original array to reverse array */
        reverse[revIndex] = saga[arrIndex];
        
        revIndex++;
        arrIndex--;
    }

    /*
     * Print the reversed array
     */
    printf("\nReversed array : ");
    for(i=0; i<size; i++)
    {
        printf("reverse[%d] = %d\n",i,reverse[i]);
    }

    return 0;
}
