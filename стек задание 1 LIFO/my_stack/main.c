#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    //is empty();
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6); //stack overflow
    show();

    int a = pop();
    printf ("\na = %d\n", a);
    show();

    int b = pop();
    printf ("\nb = %d\n", b);
    show();

    int c = pop();
    printf ("\nc = %d\n", c);
    show();

    push(3);
    printf ("\n");
    show();

    push(4);
    printf ("\n");
    show();

    push(5);
    printf ("\n");
    show();

    return 0;
}
