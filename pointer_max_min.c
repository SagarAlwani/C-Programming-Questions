#include <stdio.h>
#define SIZE 100  
	void main()
{
    int saga[SIZE];
    int i, max, min, size,*p;
	printf("Enter size of the array:\n");
    scanf("%d", &size);
	printf("Enter elements in the array:\n");
    for(i=0; i<size; i++)
    {
    	printf("saga[%d] = ",i);
        scanf("%d", (saga+i));
    }
    max = *saga;
    min = *saga;
	for(i=1; i<size; i++)
    {
        if(*(saga+i) > max)
            max = *(saga+i); 
        if(*(saga+i) < min)
            min = *(saga+i);
    }
	printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);
}
