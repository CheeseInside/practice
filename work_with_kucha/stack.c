#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack_item_t
{
    int value;
    struct stack_item_t *next;
} *p_stack = NULL;

struct stack_item_t stack;

//*p_stack = &stack;

int counter = 0;

bool is_empty(void)
{
    return(!p_stack);
}

void show(void)
{
    //if(is_empty())
    if(!stack.value)
    {
        printf("Stack is empty");
    }
    else
    {
        for (size_t i = 0; i < counter; i++)
        {
            printf ("%d ", stack.next->value);
        }
    }
}

int push (int n)
{
    stack.next = malloc (sizeof stack.next);
    stack.next->value = n;
    printf ("%d ", stack.next->value);
    counter++;
    return 0;
}

int pop(void)
{
    printf ("\n%d ", stack.next->value);
    free(stack.next);
    counter--;
}


