#include <stdio.h>

// Print an array of a given legnth.
void PrintArray(int array[], int length)
{
    for(int i = 0; i<length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Set all the values of argument "array" to be "value".
void SetArray(int array[], int length, int value)
{
    for(int i = 0; i<length; i++)
    {
        array[i] = value;
    }
}

int main()
{
    printf("Begin.\n");

    int a[] = {3, 5, 2, 6, 1, 9};
    int length = 6;

    PrintArray(a, length);

    SetArray(a, length, 0);

    PrintArray(a, length);

    return 0;
}
