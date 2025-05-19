#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
} person;

int main(void)
{
    person people[3];
    people[0].name = "Abrorbek";
    people[0].number = "94-316-02-52";
    people[1].name = "Dilshoda";
    people[1].number = "99-897-12-31";
    people[2].name = "Malina";
    people[2].number = "90-123-43-77";

    for (int i = 0; i < 3; i++)
    {
        printf("%s, %s  a\n", people[i].name, people[i].number);
    }
}