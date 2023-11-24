#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int dominator(const int *array, size_t n) 
{

    int arr[n];
  for (size_t i = 0; i < n; i++)
  {
      arr[i] = array[i];
  }
  
    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    size_t quant = 1;
    size_t max_quant = 0;
    int dominator;
    for (size_t i = 0; i < n-1; i++)
    {
        if (arr[i] == arr[i+1])
        {
            quant++;
            if (quant > max_quant)
            {
                max_quant = quant;

                dominator = arr[i];
            }
        }
        else
        {
            quant = 1;
        }
    }
    if (max_quant > n/2)
    {
        return dominator;
    }
    else if (n == 1)
    {
        return arr[0];
    }
    else
    {
        return -1;
    }


}
