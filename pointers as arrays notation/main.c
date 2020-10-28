#include <stdio.h>

#define array_size  5
int main()
{
    int A[array_size] = {11 , 22 , 33 , 44 , 55 }; /* initialize array b */
    int *p_arr = A; /* set p_arr to point to array A */
    int i ; // counter
    int index ; // counter
    /* output array A using array subscript notation */
    printf( "Array A printed with:\nArray subscript notation\n" );
    /* loop through array A */
    for(i = 0 ; i < array_size ; i++){
        printf( "A[ %d ] = %d\n", i,A[i] );
    }
    /* output array A using array name and pointer/index notation */
    printf( "\nPointer/index notation where\n the pointer is the array name\n" );
    for(index = 0 ; index < array_size ; index++){
        printf( "*( A + %d ) = %d\n", index, *(A+index) );
    }
    /* output array A using p_arr and array subscript notation */
    printf( "\nPointer subscript notation\n" );
    for(i = 0 ; i < array_size ; i++){
        printf( "p_arr[ %d ] = %d\n", i,p_arr[i] );
    }
    /* output array A using p_arr and pointer/index notation */
    printf( "\nPointer/index notation\n" );
    for(index = 0 ; index < array_size ; index++){
        printf( "*(p_arr + %d ) = %d\n", index, *(p_arr+index) );
    }
    return 0;
}
