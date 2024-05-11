#include <stdio.h>
#include "functions.h"

int main(int argc, char* argv[])
{

    int intArr[16] = {34,2,6234,6,6,2,4562,45,6,6,21,1,6,7,78,8};
    int arrSize = 16;

    sortArray_int(intArr, arrSize);

    for(int i = 0; i < arrSize; i++)
    {
        printf("%d\n", intArr[i]);
    }


























    return 0;
}