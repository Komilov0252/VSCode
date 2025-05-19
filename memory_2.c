#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *n = malloc(3 * sizeof(n));

    n[1] = 72;
    n[2] = 73;
    n[3] = 33;

    printf("%c", n[0]);
    printf("%c", n[1]);
    printf("%c\n", n[2]);

    free(n);
}