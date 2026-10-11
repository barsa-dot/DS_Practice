#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int *p = arr;

    printf("%d\n", *p);
    printf("%d\n", *(p + 2));

    p++;

    printf("%d\n", *p);

    p = p + 2;

    printf("%d\n", *p);

    return 0;
}