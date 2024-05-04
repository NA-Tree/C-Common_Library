#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "functionInits.h"

//global constants
#define pi      (atan(1))
#define e       2.718281828459045
#define rt2     sqrt(2)
#define rt3     sqrt(3)


//returns a -1 if there is an error and a 0 if it completed successfully
int sort_int_array(int* intArray, int sizeOfArray)
{
    bubble_sort_int(intArray, sizeOfArray);
    return 0;
}

int bubble_sort_int(int* intArray, int sizeOfArray)
{
    int i, j;
    int swapRegister;

    for(i = 0; i < sizeOfArray - 1; i++)
    {
        for(j = 0; j < sizeOfArray - 1 - i; j++)
        {
            if(intArray[j] > intArray[j + 1])
            {
                swapRegister = intArray[j];
                intArray[j] = intArray[j + 1];
                intArray[j + 1] = swapRegister;
            }
        }
    }

    return 0;
}






