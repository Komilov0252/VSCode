#include <stdio.h>

void draw(int x);

int main(void)
{
    int n;
    printf("n : ");
    scanf("%d", &n);
    draw(n);
}

void draw(int x)
{
    for (int i = 0; i<x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

