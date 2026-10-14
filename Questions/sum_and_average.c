/*
Dynamic memory: Sum and average
Write a complete C program that:
1. Reads an integer n representing the number of elements.
2. Dynamically allocates memory for n integers using malloc().
3. Checks whether the allocation succeeded.
4. Reads n integers from the user.
5. Calculates and prints their sum and average.
6. Frees the allocated memory and sets the pointer to NULL.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum=0;
    float avg;

    printf("Enter the no of elements \n");
    if(scanf("%d",&n) != 1 || n<=0)
    {
        printf("\nInvalid input\n");
        return 0;
    }

    int *arr = malloc((size_t)n * sizeof*arr);

    if(arr == NULL)
    {
        printf("Pointer not available \n");
        return 0;
    }

    printf("Enter the integers \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    avg = (float)sum/n;

    printf("Sum = %d \n", sum);
    printf("Average = %f", avg);

    free(arr);
    arr = NULL;

    return 0;
}