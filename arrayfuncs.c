#include "arrayfuncs.h"
#include <stdio.h>

void setinarr(int * arr, int index,int value) // setting index in the array to be value
{
    *(arr+index) = value; // setting the specific adress to be value
}

int getfromarr(int * arr, int index) // returning the adress of a specific int in the array
{
    return *(arr+index); // returning the adress of a specific int in the array
}

void shift_elements(int * arr, int i) // moving the next i numbers to right
{
    int j = i;
    for(;j>=0;j--) // loop to move the i ints
    {
        setinarr(arr,j+1,getfromarr(arr,j)); // moving the int in place j to place j+1
    }
}

void printarray(int * arr,int len) // printing the array
{
    for(int i = 0;i <len; i++) // going through the array
    {
        if(i==len-1) // if we came to the last index dont print ','
            printf("%d\n",getfromarr(arr,i));
        else
            printf("%d,",getfromarr(arr,i));
    }
}
int search(int * arr,int element,size_t len)  // looking for the next index in the array that is smaller than the element and returning his position in the array
{
    int i;
    for(i = 0;i<len;i++) // going through the array to find the number that smaller than element
    {
        if(element <= getfromarr(arr,i)) // if we found index that smaller then the element return his position in the array
            return i;
    }
    return i; // if the element is the biggest on in the array return the last posible position in the array so the algorithm will place the element there
}

void insertion_sort(int* arr , int len) // sorting array with size equals to len
{
    int index;
    int temp;
    for(int i = 1; i < len ; i++) // making the loop len times
    {
        index = search(arr,getfromarr(arr,i),(size_t)i);
        if (index != i ) // if the index in the correct place dont move him but if not place him in the i that returned from the search function
        {
            temp = getfromarr(arr,i);
            shift_elements(arr+index,i-(index+1));
            setinarr(arr,index,temp);
        }
    }
}
