//bubbleBlackbelt.c
//famous bubble sort
/* For the blackbelt I implemented random numbers to be put in the array using rand() */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*, int*);
int* ranArray();

/* when the random number is sent it says its not a constant so it wont accept it */
int values[] = {ranArray(),ranArray(), ranArray(),ranArray(),ranArray(), ranArray(),ranArray(),ranArray(), ranArray()};

int main(){
	printf("Before: \n");
	printValues();
	sort();
	printf("After: \n");
	printValues();
	return(0);
 } // end main

void printValues(){
	int i = 0;
	printf("[ ");
	for (i=0; i<MAX; i++){
		printf("%d ", values[i]);
	} //end for
	printf("]\n");
} //end printValues

void sort(){
	int i = 0;
	int j = 0;
	for (i=0; i<(MAX-1); i++){
		for (j=0; j<(MAX-1); j++){
			if (values[j] > values[j+1]){
				swap( &values[j] , &values[j+1] );
				printValues();
			} //end if
		} //end for
	} //end for
} //end sort

void swap(int* big, int* small ){
	int temp = *small;
	*small = *big;
	*big = temp;
} //end swap

/* I tried to make the random number here then send it up to the global array values[] */
int* ranArray(){
	int* r = 0;
	time_t t;
	
	srand((unsigned) time(&t));
	
        r = ((rand() % 100) + 1);

	return r;
	
} //end ranArray
