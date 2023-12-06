#include <math.h>
int prime_factors (unsigned long long n, unsigned long long factors[])
{
  unsigned long long root = sqrt(n);
  int i = 0;
  if (n == 1)
  {
    return 0;
  }
  if (n == 3)
  {
    factors[i] = 3;
    return 1;
  }
  
  for (unsigned long long k = 2; k < root+10; k++)
  {
    if (n%2 == 0 && n!=2)
    {
      n=n/2;
      factors[i]=2;
      i++;
      k = 1;
      continue;
    }
    if (n == k)
    {
      factors[i] = k;
      return ++i;
    }
    if (n % k == 0)
    {
      factors[i] = k;
      n = n/k;
      i++;
      k = 1;
    }
  }
  
  unsigned long long mult = 1;
  for (int j = 0; j < i; j++)
  {
    mult *= factors[j];
  }
  if (mult != n)
  {
    factors[i] = n;
    i++;
    return i;
  }

  return i;
}
