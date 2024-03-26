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

void Swap(int* a, int* b)
{
    int* temp = a;
    b = a;
    a = temp;
}

void LoopTest(int length)
{
    printf("length: %d\n", length);

    for( int i = 0; i < length-1; ++i)
    {
        printf("%d ", i);
    }
}

// Perform bubble sort on integer array of a given length.
void BubbleSort(int array[], int length)
{

}

int main()
{
    printf("Begin.\n");

    int a[] = {5, 2};
    int b[] = {56, 1203};
    int c[] = {14, 13, 63, 86, 1, 0, 6, 9};

    LoopTest(10);

    return 0;
}
