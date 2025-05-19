#include <stdio.h>

void draw(int x);

int main(void)
{
    int n;
    printf("n : ");
    scanf("%i", &n);
    draw(n);
}

void draw(int x)
{
    if (x <= 0)
    {
        return;
    }
    
    draw(x - 1);

    for (int i = 0; i < x; i++)
    {
        printf("#");
    }
    printf("\n");

}