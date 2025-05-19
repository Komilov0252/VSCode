#include <stdio.h>

int main(void)
{
    FILE *f = fopen("phonebook.csv", "a");

    if (f == NULL)
    {
        return 1;
    }

    char *name, * number;
    scanf("%s", name);
    scanf("%s", number);

    fprintf(f, "%s, %s \n", name, number);

    fclose(f);
}