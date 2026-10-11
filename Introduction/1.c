// Browsing through an array using pointters
#include <stdio.h>

int main()
{
    int arr[] = {10,20,30};
    int *p = arr;

    for(int i = 0; i<3; i++)
    {
        printf("%d \n", *(p+i));
    }

    return 0;
}