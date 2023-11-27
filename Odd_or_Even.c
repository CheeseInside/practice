#include <stddef.h>

const char *odd_or_even(const int *v, size_t sz) 
{
    int counter = 0;
    for (size_t i = 0; i < sz; i++)
    {
        if (v[i]%2)
        {
            counter++;
        }
    }
    
    if (counter%2)
    {
        return "odd";
    }
    else
    {
        return "even";
    }
}
