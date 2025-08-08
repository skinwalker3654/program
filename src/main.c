#include <stdio.h>
#include <stdlib.h>
#include "program.h"

#define MAX_NUMS 10
#define MIN_NUMS  1

int main(void) {
    int arr[ARRAY_SIZE];

    int num_count;
    printf("Enter how many numbers you want (1-10): "); //geting num count
    if(scanf("%d",&num_count)!=1) {
        fprintf(stderr,"Error: Invalid input\n");
        exit(EXIT_FAILURE);
    }
    clear_buffer();

    /* checks if the num_count is out of range 1-10 */
    if(num_count < MIN_NUMS || num_count > MAX_NUMS) {
        fprintf(stderr,"Error: Invalid size\n");
        exit(EXIT_FAILURE);
    }

    for(int i=0; i<num_count; i++) { //getting array numbers
        printf("Enter number(%d): ",i+1);
        if(scanf("%d",&arr[i])!=1) {
            clear_buffer();
            i--;
            fprintf(stderr,"Error: Invalid input, try again.\n");
            continue;
        }
        clear_buffer();
        if(arr[i] < 0) { //checking if number is positive
            fprintf(stderr,"Error: Expected a positive number, try again\n");
            i--;
            continue;
        }
    }

    /* Targets */
    int max = find_max(arr,num_count);
    int min = find_min(arr,num_count);
    float average = find_avg(arr,num_count);

    /* Print stats */
    printf("\nAverage number: %.2f\n",average);
    printf("Maximum number: %d\n",max);
    printf("Minimum number: %d\n",min);

    exit(EXIT_SUCCESS);
}
