#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[10];
    int i;
    srand(time(NULL));

    for (i = 0; i < 9; i++)
    {
        arr[i] = rand();
    }
    arr[i] = 0;

    for (i = 0; i < 10; i++)
    {
        printf("The value at position %d in arr is %d\n", i, arr[i]);
    }
    printf("\n");

    int second_arr[10];

    int *value = arr;
    value += sizeof(arr) / sizeof(int);
    value--;

    int *second_value = second_arr;

    for (i = 0; i < 10; i++)
    {
        *second_value = *value;
        second_value++;
        value--;
    }

    for (i = 0; i < 10; i++)
    {
        printf("The value at position %d in the second arr is %d\n", i, second_arr[i]);
    }

    return 0;
}