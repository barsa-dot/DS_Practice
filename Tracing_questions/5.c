#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(sizeof *p);

    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *p = 75;

    printf("Value = %d\n", *p);

    free(p);
    p = NULL;

    return 0;
}