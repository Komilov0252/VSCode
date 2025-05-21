#include<stdio.h>

const int CAPACITY = 50;

typedef struct
{
    char *name;
    char *phone;
} person;


typedef struct
{
    person people[CAPACITY];
    int size
} queue;


