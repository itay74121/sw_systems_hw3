#include <stdio.h>
#include "arrayfuncs.h"
#include<string.h>
#define ARR_SIZE 50

int main(int argc, char ** argv)
{
    int arr [ARR_SIZE];
    int temp;
    printf("Enter 50 numbers: ");

    for(int i =0;i<ARR_SIZE;i++)
    {
        temp=0;
        scanf("%d",&temp);
        setinarr(arr,i,temp);
    }
    
    insertion_sort(arr,ARR_SIZE);
    printf("\n");
    printarray(arr,ARR_SIZE);
    return 0;
}