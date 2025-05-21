#include <stdio.h>

int main(void)
{
    char *s = "salom";

    printf("%p\n", &s[1]);
    printf("%p\n", s);
    printf("%p", &s);
}