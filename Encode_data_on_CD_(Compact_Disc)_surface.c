#include <stdlib.h>

//  return dynamically allocated C-string
//  output result will be freed by tester


const char *encode_cd(unsigned char n) 
{
    char *expected = malloc(10);
    unsigned char value = n;
    unsigned char arr2[8];
    
    for (size_t i = 0; i < 8; i++)
    {   
        arr2[i] = n % 2;
        n = n/2;
    }

    size_t j = 1;
    expected[0] = 'P';
    expected[9] = '\0';
    for (size_t i = 0; i < 8; i++)
    {
        if (arr2[i] == 0)
        {
            expected[j] = expected[j-1];
        }
        else
        {
            if (expected[j-1] == 'P')
            {
                expected[j] = 'L';
            }
            else
            {
                expected[j] = 'P';
            }
        }
        j++;
    }
  return expected;
}
