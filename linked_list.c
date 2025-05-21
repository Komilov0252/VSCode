#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    node *head = NULL;

    for(int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        (*n).number = (i + 1)*2;
        (*n).next = NULL;

        if(head == NULL)
        {
            head = n;
        }
        else
        {
            for(node *ptr = head; ptr != NULL; ptr = ptr->next)
            {
                if(ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    node *m = malloc(sizeof(node));
    m->number = 10;

    if (head->number > m->number)
    {
        m->next = head;
        head = m;
    }
    else
    {
    for(node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        if(ptr->next == NULL)
        {
            ptr->next = m;
            break;
        }
        else if(ptr->next && ptr->next->number > m->number)
        {
            m->next = ptr->next;
            ptr->next = m;
            break;
        }
    }
}

    for(node *ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", (*ptr).number);
    }

    node *ptr = head;
    while(ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;

}