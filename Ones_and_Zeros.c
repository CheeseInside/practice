#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned bits[/*count*/], size_t count)
{
  size_t mask = 1;
      unsigned sum = 0;
      for (size_t i = 0; i < count; i++)
      {
        sum += bits[count - i - 1] * mask;
        mask <<= 1;  
      }
	    return sum;
}
