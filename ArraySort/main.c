#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE	20

void A_sort(int * arr, int size); // Ascending sorting for the array
void D_sort(int * arr, int size); // Descending sorting for the array
void print(int * arr, int size); // print the elements of the array

int arr[ARRAY_SIZE];


int main(void){
	int index;

	/* Fill array randomly and print the array */
    for(index = 0 ; index < ARRAY_SIZE ; index++){
        arr[index] = (int)rand();
    }
    print(arr , ARRAY_SIZE);// print the array on the screen

	/* sort array in ascending order and print it */
    A_sort(arr, ARRAY_SIZE);
    print(arr , ARRAY_SIZE);

	/* sort array in descending order and print it */
    D_sort(arr, ARRAY_SIZE);
    print(arr , ARRAY_SIZE);

	return 0;
}

/* Function to Sort array in ascending order */
void A_sort(int * arr, int size){
    int i ; // for looping in the array
    int temp; // temporary variable to hold data for swapping
    for(i = 1 ; i < size ; i++){
        if(arr[i] < arr[i-1]){
            temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            A_sort(arr , i);
        }
    }
}

/*  Function to Sort array in ascending order */
void D_sort(int * arr, int size){
    int i ; // for looping in the array
    int temp; // temporary variable to hold data for swapping
    for(i = 1 ; i < size ; i++){
        if(arr[i] > arr[i-1]){
            temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
            D_sort(arr , i);
        }
    }
}

/* Prints an array as follows: */
/* New array:
 * xxx xxx xxxx
 * xxx xxxx
 */
void print(int * arr, int size){
	int i;
	printf("New array:\n");
    for(i = 0 ; i < size ; i++){
        printf("%d  " , arr[i]);
    }
    printf("\n");
}
