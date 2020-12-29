#ifndef _ARRAY_FUNCS_
#define _ARRAY_FUNCS_
#include <stdlib.h>
/**
 *Function to set a new value inside an array  
 */
void setinarr(int * arr, int index,int value);
/**
 * Function to get value from array 
 */
int getfromarr(int * arr, int index);
/**
 * Function to shift the elements in an array 
 */
void shift_elements(int * arr, int i);
/**
 * Printing the array
 */
void printarray(int * arr,int len);
/**
 * Sorting array with size equals to len
 */
void insertion_sort(int* arr , int len);


#endif