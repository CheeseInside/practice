#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

struct stack_item_t
{
    int value;
    struct stack_item_t *next;
};

struct stack_item_t *stack = NULL;

void show(void)
{
    if(is_empty())
    {
        printf("stack is empty\n");
    }
    else
    {
        struct stack_item_t *stack_copy = stack;
        while(stack_copy)
        {
            printf("%d\t", stack_copy->value);
            stack_copy = stack_copy -> next;
        }
        printf("\n");
    }
}

bool is_empty(void)
{
    return(!stack);
}



int push(int n)
{
    struct stack_item_t *new_stack_item=malloc(sizeof(struct stack_item_t));
    new_stack_item->value=n;
    new_stack_item->next=NULL;
    if(is_empty())
    {
        stack=new_stack_item;
    }
    else
    {
        struct stack_item_t *stack_copy = stack;

        while(stack_copy->next)
        {
            stack_copy = stack_copy->next;
        }
        stack_copy->next = new_stack_item;

    }
    return 0;
}


int pop(void)
{
    if(is_empty())
    {
        return -1;
    }
    struct stack_item_t *top = stack;
    int value = top->value;
    stack = top->next;
    free(top);
    return value;
}
