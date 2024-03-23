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

// Perform bubble sort on integer array of a given length.
void BubbleSort(int array[], int length)
{
    // Only bother sorting lists with more than one element 
    if (length > 1)
    {
        int a = array[0];
        int b = array[1];

        // Swap values if first is greater than the second
        if(a > b)
        {
            // swap
            int t = a;
            a = b;
            b = t;

            // set values
            array[0] = a;
            array[1] = b;
        }
    }
}

int main()
{
    printf("Begin.\n");

//    int b[] = {1, 2, 3, 4, 5};
    int tuple[] = {5, 2};

    PrintArray(tuple, 2);
    BubbleSort(tuple, 2);
    PrintArray(tuple, 2);

    return 0;
}
