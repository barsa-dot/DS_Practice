#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    int c = 15;

    int *p = &a;
    int *q = &b;
    int **r = &p;

    *p = *q + 5;
    *r = q;
    *q = *q + 10;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("*p = %d\n", *p);

    return 0;
}