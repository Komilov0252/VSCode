#include<stdio.h>
 int d = 5;
int main(void)
{
    int n = 50;
    int *p = &n;
    int *a = &d;
    printf("%i\n", n);
    printf("%i\n", *p);
    printf("%p\n", p);
}