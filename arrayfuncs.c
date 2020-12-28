#include "arrayfuncs.h"
#include <stdio.h>

void setinarr(int * arr, int index,int value)
{
    *(arr+index) = value;
}

int getfromarr(int * arr, int index)
{
    return *(arr+index);
}

void shift_elements(int * arr, int i)
{
    int j = i;
    for(;j>=0;j--)
    {
        setinarr(arr,j+1,getfromarr(arr,j));
    }
}

void printarray(int * arr,int len)
{
    for(int i = 0;i <len; i++)
    {
        if(i==len-1)
            printf("%d\n",getfromarr(arr,i));
        else
            printf("%d,",getfromarr(arr,i));
    }
}
int search(int * arr,int element,size_t len)
{
    int i;
    for(i = 0;i<len;i++)
    {
        if(element <= getfromarr(arr,i))
            return i;
    }
    return i;
}

void insertion_sort(int* arr , int len)
{
    int index;
    int temp;
    for(int i = 1; i < len ; i++)
    {
        index = search(arr,getfromarr(arr,i),(size_t)i);
        //printf("index=%d, i=%d  ",index,i);
        if (index != i )
        {
            temp = getfromarr(arr,i);
            shift_elements(arr+index,i-(index+1));
            setinarr(arr,index,temp);
        }
        //printarray(arr,len);
    }
}
