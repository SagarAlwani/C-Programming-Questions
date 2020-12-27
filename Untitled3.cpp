#include <stdio.h>
#define SIZE 100      // Defines maximum size of array

int main()
{
    int saga[MAX_SIZE];
    int n, i;

    /* Input size of array */
    printf("Enter size of the array: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &saga[i]);
    }

    /*
     * Print array in reversed order
     */
    printf("\nArray in reverse order: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
