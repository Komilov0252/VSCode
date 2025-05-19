#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s, *t;

    printf("S : ");
    scanf("%s", s);

    t = malloc(strlen(s)+1);
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        t[i] = s[i];
    }
    if (strlen(t))
    {
        t[0] = toupper(t[0]);    
    }    
    printf("%s\n", s);
    printf("%s\n", t);
}