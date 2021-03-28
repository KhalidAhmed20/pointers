/*
***********************************************************************************
Program to show some Arithmetic Operations on Pointers
***********************************************************************************
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]= {1,2,3};
    int *ptr = arr;
    printf("%d\t%d\t%d\t%p\t%d\n" , arr[0] ,arr[1] ,arr[2] ,ptr ,*ptr);
    *ptr++ = -1;
    printf("%d\t%d\t%d\t%p\t%d\n" , arr[0] ,arr[1] ,arr[2] ,ptr ,*ptr);
    *++ptr = -2;
    printf("%d\t%d\t%d\t%p\t%d\n" , arr[0] ,arr[1] ,arr[2] ,ptr ,*ptr);
    (*ptr)++;
    printf("%d\t%d\t%d\t%p\t%d\n" , arr[0] ,arr[1] ,arr[2] ,ptr ,*ptr);
    return 0;
}
