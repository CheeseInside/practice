#include "stack.h"
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

int push(int n)
{
    if(stack[0] != NULL)
    {
        return -1;
    }
    else
    {
        stack[cnt] = n;
        cnt--;
        return 0;
    }
}

int pop(void)
{
    if(stack[SIZE-1] == NULL) //stack is empty
    {
        return -1;
    }
    int value;
    for (size_t i = 0; i < SIZE; i++)
    {
        if (stack[i] != NULL)
        {
            value = stack[i];
            stack[i] = NULL;
            cnt++;
            break;
        }
    }
    return value;
}

/*bool is_full(void)
{

}

bool is_empty(void)
{
    if(stack[SIZE-1])
    {
        printf ("\nStack is empty\n");
    }
}
*/
