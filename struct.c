#include <stdio.h>

typedef struct
{
    char name[20];
    int votes;
} candidate;

int main(void)
{
    const int n = 3;
    candidate president[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter candidate name :");
        scanf("%s", president[i].name);
        printf("Enter votes of %s : ", president[i].name);
        scanf("%d", &president[i].votes); 
    }
    int max = 0, j;
    for(int i=0; i < n; i++)
    {
        if (president[i].votes >= max)
        {
            max = president[i].votes;
            j = i;
        }
    }
    printf("%s is the most vote collected candidate for Presidensy. %i \n", president[j].name, president[j].votes);
}
