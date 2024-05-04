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



int sort_int_array(int intArray[], int sizeOfArray)
{
    quick_sort_int(intArray, 0, sizeOfArray - 1);
    //bubble_sort_int(intArray, sizeOfArray);
    return 0;
}


void swap_mem(int* Element1, int* Element2)
{
    int swapRegister;

    swapRegister = *Element1;
    *Element1 = *Element2;
    *Element2 = swapRegister;
}


int bubble_sort_int(int intArray[], int sizeOfArray)
{
    int i, j;

    for(i = 0; i < sizeOfArray - 1; i++)
    {
        for(j = 0; j < sizeOfArray - 1 - i; j++)
        {
            if(intArray[j] > intArray[j + 1])
            {
                swap_mem(&intArray[j], &intArray[j + 1]);
            }
        }
    }

    return 0;
}


int partition(int arr[], int low, int high) 
{
    int pivot = arr[low]; 
    int i = low; 
    int j = high; 
  
    while (i < j)
    { 
  
        // condition 1: find the first element greater than 
        // the pivot (from starting) 
        while (arr[i] <= pivot && i <= high - 1)
        { 
            i++; 
        } 
  
        // condition 2: find the first element smaller than 
        // the pivot (from last) 
        while (arr[j] > pivot && j >= low + 1)
        { 
            j--; 
        } 

        if (i < j)
        { 
            swap_mem(&arr[i], &arr[j]); 
        } 
    } 
    swap_mem(&arr[low], &arr[j]);

    return j;
}

int quick_sort_int(int arr[], int low, int high) 
{ 
    if (low < high)
    { 

        int partitionIndex = partition(arr, low, high);
  
        // Recursively call quick_sort_int() for left and right 
        // half based on partition Index 
        quick_sort_int(arr, low, partitionIndex - 1); 
        quick_sort_int(arr, partitionIndex + 1, high); 
    } 


    return 0;
} 




