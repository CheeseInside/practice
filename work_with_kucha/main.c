#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    show();
    printf("\n");
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    int a = pop();
    a = pop();
    a = pop();
    a = pop();
    a = pop();
    a = pop();
    a = pop();
    a = pop();


    return 0;
}
