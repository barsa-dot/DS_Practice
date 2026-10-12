#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 15, 20, 25};

    int *p = arr + 1;

    printf("%d\n", *p);
    printf("%d\n", *(p + 2));

    p--;

    printf("%d\n", *p);

    printf("%d\n", p[3]);

    printf("%d\n", *(arr + 4));

    return 0;
}