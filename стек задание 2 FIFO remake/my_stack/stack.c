#include "stack.h"
#include <stdbool.h>
#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int pr = 0;
int pw = 0;


void show(void)
{
    for(size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", stack[i]);
    }
}

bool is_empty(void)
{
    if(pw == pr && !stack[pw])
    {
        printf ("Stack is empty\n");
        return -1;
    }
    else
    {
        return 0;
    }
}

bool is_full(void)
{
    if(pw == pr && stack[pw])
    {
        printf ("Stack is full\n");
        return -1;
    }
    else
    {
        return 0;
    }
}

int push(int n)
{

    if (is_full());

    else
    {
        stack[pw] = n;
        pw++;
        pw %= SIZE;
        return 0;
    }
}

int pop(void)
{
    int value;

    if (is_empty());
    else
    {
        value = stack[pr];
        stack[pr] = NULL;
        pr++;
        pr %= SIZE;
        return value;
    }
}



