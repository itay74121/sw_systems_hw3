#include <stdio.h>
#include "arrayfuncs.h"
#include<string.h>
#define ARR_SIZE 50

int main(int argc, char ** argv)
{
    int arr [ARR_SIZE]; // making array with size 50
    int temp;
    printf("Enter 50 numbers: ");

    for(int i =0;i<ARR_SIZE;i++) // lop to enter the 50 numbers
    {
        temp=0;
        scanf("%d",&temp);
        setinarr(arr,i,temp); // setting the number in the array
    }
    
    insertion_sort(arr,ARR_SIZE); // sorting the array
    printf("\n");
    printarray(arr,ARR_SIZE); // printing the array
    return 0;
}