#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    show();
    push(1);
    show();
    push(2);
    show();
    push(3);
    show();
    push(4);
    show();

    int a = pop();
    show();
    a = pop();
    show();
    a = pop();
    show();
    printf ("\n\n");

    a = pop();
    show();

    push(11);
    show();
    push(12);
    show();
    push(13);
    show();
    printf ("\n\n");
    a = pop();
    show();
    a = pop();
    show();

    return 0;
}
