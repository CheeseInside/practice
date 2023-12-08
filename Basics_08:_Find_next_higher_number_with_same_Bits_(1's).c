#include <stdio.h>
#include <stdlib.h>
int next_higher(int n) 
{
    int m = n;
    if ( n == 1)
    {
      return 2;  
    }
  
    int *number = malloc (31 * sizeof(int)); 
  
    for (size_t i = 0; i < 32; i++)
    {   
        number[i] = n % 2;
        n = n/2;
    }
    
    for (size_t i = 0; i < 31; i++)
    {
        if (number[i] == 1 && number[i+1] == 0)
        {
            number[i] = 0;
            number[i+1] = 1;
            break;
        }
    }
    
    int number_in_10 = 0;
    int mask = 1;
    for (size_t i = 0; i < 32; i++)
    {   
        number_in_10 += number[i] * mask;
        mask <<= 1; 
    }
    int prev_number;
    
    while (number_in_10 > m)
    {
        for (size_t i = 0; i < 31; i++)
        {
            if (number[i] == 0 && number[i+1] == 1)
            {
                number[i] = 1;
                number[i+1] = 0;
                break;
            }
        }
        prev_number = number_in_10;
        number_in_10 = 0;
        mask = 1;
        for (size_t i = 0; i < 32; i++)
        {   
            number_in_10 += number[i] * mask;
            mask <<= 1; 
        }
    }
    free (number);
  
    return prev_number;
}
