#include <stdio.h>
#include <string.h>

int main(void)
{
    char *i, *j;
    printf("enter i: ");
    scanf("%s", i);
    printf("enter : j ");
    scanf("%s", j);

    if (strcmp(i, j) == 0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("different\n");
    }
}