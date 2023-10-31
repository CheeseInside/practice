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
    if(is_empty())
    {

        printf("Stack is empty");
    }
    else
    {
        for (size_t i = 0; i < counter; i++)
        {
            printf ("%d ", p_stack->value);
        }
    }
}

int push (int n)
{
    stack.value = 1;
    printf ("%d ", stack.value);
    stack.next = malloc (sizeof stack.next);
    counter++;
    return 0;
}


