#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ZERO 0
int main()
{
    printf("Enter size of input:\n");
    int x;
    scanf("%d", &x);
    if (x <= 0)
        printf("Invalid size\n");
    else
    {
        printf("Enter numbers:\n");
        int *arr = (int *)malloc(sizeof(int) * x);
        if (arr == NULL)
            printf("error\n");
        int i = 0;

        while (i!=x && scanf("%d", &arr[i]))
        {
            i++;
        }
        if (i == x)
        {
            int sum_expo = ZERO;
            int counter = ZERO;
            int replaced = ZERO;
            for (int j = 0; j < x; j++)
            {
                replaced = arr[j];
                if(replaced>0)
                while (replaced % 2 == 0)
                {
                    replaced = replaced / 2;
                    counter++;
                }
                if (replaced == 1)
                {
                    sum_expo += counter;
                    printf("The number %d is a power of 2: %d = 2^%d\n", arr[j], arr[j], counter);
                }
                counter = 0;
            }
            printf("Total exponent sum is %d\n", sum_expo);
        }
        else printf("Invalid number\n");
        free(arr);
        
    }

    return 0;
}
