#include "stack.h"
#include <stdbool.h>
#include <stdio.h>
#define SIZE 5

int conveyor[SIZE];
int pr = 0;
int pw = 0;
int counter = 0;


void show(void)
{
    for(size_t i = 0; i < SIZE; i++)
    {
        if (conveyor[i])
        {
            printf("%d ", conveyor[i]);
        }
    }
}

bool is_empty(void)
{
    if(counter == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool is_full(void)
{
    if(counter == SIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(int n)
{

    if (is_full())
    {
        return -1;
    }

    else
    {
        conveyor[pw] = n;
        pw++;
        pw %= SIZE;
        counter++;
        return 0;
    }
}

int pop(void)
{
    int value;

    if (is_empty())
    {
        return -1;
    }
    else
    {
        value = conveyor[pr];
        conveyor[pr] = NULL;
        pr++;
        pr %= SIZE;
        counter--;
        return value;
    }
}



