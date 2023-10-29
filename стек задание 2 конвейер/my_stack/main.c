#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main()
{
    int a = pop();
    show();

    push(1);
    printf("\n");
    show();

    push(2);
    printf("\n");
    show();

    push(3);
    printf("\n");
    show();

    push(4);
    printf("\n");
    show();

    push(5);
    printf("\n");
    show();

    printf("\n");
    push(6);
    show();
    printf("\n");

    a = pop();
    a = pop();
    a = pop();
    a = pop();
    a = pop();
    a = pop();

    show();

    push(1);
    printf("\n");
    show();

    push(2);
    push(3);
    push(4);
    push(5);
    printf("\n");
    show();
    printf("\n");
    push(6);
    push(7);
    show();

    a = pop();
    a = pop();
    a = pop();
    push(2);
    push(3);
    printf("\n");
    a = pop();
    show();

    return 0;
}
