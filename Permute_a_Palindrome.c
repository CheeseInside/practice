#include <stdbool.h>


bool permute_a_palindrome(const char *str_in) 
{
    //  <----  hajime!
  if (!str_in[0])
  {
    return true;  
  }
  int size = 0;
  while(str_in[size])
  {
      size++;
  }
  if (size == 1)
  {
    return true;  
  }
  
  char* alphabet = "abcdefghijklmnopqrstuvwxyz";
  
  int coincidence[size];
  for (int i = 0; i < size; i++)
  {
    coincidence[i] = 1;
  }
  
  for (int i = 0; i < size; i++)
  {
      for (int j = 0; j < i; j++)
      {
          if (str_in[j] == str_in[i])
          {
              coincidence[j] += 1;
          }
      }
  }
  
  for (int i = size; i > -1; i--)
  {
      for (int j = 0; j < i; j++)
      {
          if (str_in[i] == str_in[j])
          {
              coincidence[i] = 0;
          }
      }
  }
  
  int odd = 0;

  for (int i = 0; i < size; i++)
  {
    if(coincidence[i] % 2 != 0 && coincidence[i] != 0)
    {
      odd++;
    }
    if(odd > 1)
    {
      return false;
    }
  }

  return true;
}
