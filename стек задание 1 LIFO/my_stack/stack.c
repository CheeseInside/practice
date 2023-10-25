#include "stack.h"
#include <stdbool.h>
#include <stdio.h>
#define SIZE 5

int stack[SIZE];
size_t cnt = SIZE - 1;
void show(void)
{
    for(size_t i = 0; i < SIZE; i++)
    {
        printf("%d ", stack[i]);
    }
}

bool is_empty(void)
{
    if(!stack[SIZE-1])
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
    if(stack[0])
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
    /*if(stack[0] != NULL) //stack is full
    {
        return -1;
    }*/
    if (is_full());

    else
    {
        stack[cnt] = n;
        cnt--;
        return 0;
    }
}

int pop(void)
{
    /*if(stack[SIZE-1] == NULL) //stack is empty
    {
        return -1;
    }*/
    if (is_empty());

    int value;
    for (size_t i = 0; i < SIZE; i++)
    {
        if (stack[i])
        {
            value = stack[i];
            stack[i] = NULL;
            cnt++;
            break;
        }
    }
    return value;
}



