#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *longestConsec (const char *const strings[/*arr_len*/], int arr_len, int k)
{
/* return a heap-allocated string, memory will be freed */
  if (k > arr_len || arr_len == 0 || k <= 0)
  {
    return calloc (1, 1);
  }
  
  size_t sizes [arr_len];
  for (int i = 0; i < arr_len; i++)
  {
    sizes[i] = strlen(strings[i]);
  }
  
  size_t max_len = 0;
  size_t index = 0;
 
    for (int i = 0; i < arr_len - k + 1; i++)
    {
      size_t len = 0;
      for (int j = 0; j < k; j++)
      {
        len += sizes[i + j];
      }

      if (len > max_len)
      {
        max_len = len;
        index = i;
      }
    }
    char *result = calloc (max_len + 1, 1);

    for (int j = 0; j < k; j++)
    {
        strcat(result, strings[index + j]);
    }

    return result;
}
