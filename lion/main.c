#include <stdio.h>
#include <math.h>
#define M 33
int arr[M] = {11, 2, 1, 5, 4, 10, 9, 7, 8, 3, 6, 12, 14, 13, 17, 16, 22, 21, 19, 20, 15, 18, 24, 23, 25, 26, 28, 27, 29, 30, 32, 31, 33};


int number = 21;
size_t l = M/2 + M%2;
double i = 2;

void lion (int *arr, int number)
{
    while (arr[l] != number)
    {
        printf ("\nl = %u", l);

        if (number == arr[l+1])
        {
            l++;
            break;
        }
        if (number == arr[l-1])
        {
            l--;
            break;
        }

        if (l >= M/2 + M%2 )
        {
            if (l >= 3 * M / 4)
            {
                if (number > arr[l])
                {
                    l = M - ceil(l/i);
                }
                else
                {
                    l -= ceil(l/i);
                }
            }
            else
            {
                if (number > arr[l])
                {
                    l = 3* M /4 - ceil(l/i);
                }
                else
                {
                    l -= ceil(l/i);
                }
            }
            i++;
        }

        else
        {
            if (number > arr[l])
            {
                l += l/2 + l%2;
            }
            else
            {
                l -= l/2 + l%2;
            }
        }
    }
}

void bubble(int *arr)
{
    for (size_t j = 0; j<M-1; j++)
    {
        for (size_t i = 0; i<M-1-j; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp;
                temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (size_t i = 0; i<M; i++)
    {
        printf ("%d ", arr[i]);
    }
}

int main()
{
    bubble (arr);
    lion (arr, number);
    printf ("\nindex of number(%d) = %u", number, l);
    return 0;
}
