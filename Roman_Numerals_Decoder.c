#include <string.h>
#include <stdlib.h>

int let_to_num (char c)
{
    #define SIZE 7
    const char let_arr[SIZE] = "IVXLCDM";
    unsigned int num_arr[SIZE] = {1, 5, 10, 50, 100, 500, 1000};
  for (size_t i = 0; i < SIZE; i++)
  {
    if(c == let_arr[i])
    {
        //printf("%c\t%d\n", c, num_arr[i] );
        return num_arr[i];
    }
  }
  return 0;
}



unsigned decode_roman (const char *roman_number)
{
  
    
  int size = strlen(roman_number);
  unsigned *result = malloc (size * 4); 


  
  for (int i = 0; i < size; i++)
  {
      result[i] = let_to_num (roman_number[i]);
  }
  
  unsigned number = 0;
  
  for(size_t i = 0; i < size; i++)
  {
      if ( (i < size-1) && (result[i] < result[i+1]))
      {
        number -= result[i];
      }
      else
      {
        number += result[i];
      }
    printf ("%d\t", number);
  }
  
  
	return number;
}
