#include <stdio.h>
#include "library.h"

int main(int argc, char* argv[])
{
    int i, j;
    
    long sizeOfArray = 10;
    int myArr1[] = {100, 90, 80, 50, 60, 20, 30, 40, 70, 10};

    sort_int_array(myArr1, sizeOfArray);

    
    for(i = 0; i < sizeOfArray; i++)
    {
        printf("%d\n", myArr1[i]);
    }




























    return 0;
}