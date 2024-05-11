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



int sortArray_int(int intArray[], int sizeOfArray)
{
    //return quickSort_int(intArray, 0, sizeOfArray - 1);
    //return bubbleSort_int(intArray, sizeOfArray);
    return selectionSort_int(intArray, sizeOfArray);

    //return stolenSelect_int(intArray, sizeOfArray);
}

void swapMem(int* Element1, int* Element2)
{
    int swapRegister;

    swapRegister = *Element1;
    *Element1 = *Element2;
    *Element2 = swapRegister;
}

int bubbleSort_int(int intArray[], int sizeOfArray)
{
    int i, j;

    //going through the array as many times as there are elements
    for(i = 0; i < sizeOfArray - 1; i++)
    {
        //starting at the beginning and checking each element until you 
        //reach the end of the unsorted portion of the array
        for(j = 0; j < sizeOfArray - 1 - i; j++)
        {
            //checking if the current element needs to be swapped with it's neighbor
            //and doing so if needed
            if(intArray[j] > intArray[j + 1])
            {
                swapMem(&intArray[j], &intArray[j + 1]);
            }
        }
    }

    return 0;
}

int quickSortPartition_int(int arr[], int low, int high) 
{
    if(low < 0)
    {
        printf("boundary error in quicksort");
        return -1;
    }

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
            swapMem(&arr[i], &arr[j]); 
        } 
    } 
    swapMem(&arr[low], &arr[j]);

    return j;
}

int quickSort_int(int arr[], int low, int high) 
{ 
    if (low < high)
    { 

        int partitionIndex = quickSortPartition_int(arr, low, high);
  
        // Recursively call quickSort_int() for left and right 
        // half based on partition Index 
        quickSort_int(arr, low, partitionIndex - 1); 
        quickSort_int(arr, partitionIndex + 1, high); 
    } 


    return 0;
} 

int selectionSort_int(int arr[], int sizeOfArray)
{
    int i, j, minLocation, swap;

    for(i = 0; i < sizeOfArray - 1; i++)
    {
        minLocation = i;
        
        for(j = i + 1; j < sizeOfArray; j++)
        {
            if(arr[j] < arr[minLocation])
            {
                minLocation = j;
            }

            if(minLocation != i)
            {
                swap = arr[i];
                arr[i] = arr[minLocation];
                arr[minLocation] = swap;
            }            
        }
    }

    return 0;
}

int gcd(int element1, int element2)
{
    int a;
    int b;
    int remainder;

    //making the 'a' variable the larger value
    if(element1 > element2)
    {
        a = element1;
        b = element2;
    }
    else
    {
        a = element2;
        b = element1;
    }

    //using euclids gcd method
    remainder = a % b;

    if(remainder)
    {
        return gcd(b, a - b);
    }
    else
    {
        return b;
    }


}


