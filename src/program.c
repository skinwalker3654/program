#include <stdio.h>
#include "program.h"

float find_avg(int arr[],int size) { //calculates the average
    float total = 0;
    for(int i=0; i<size; i++) 
        total += (float)arr[i];
    return total / size;
}

int find_max(int arr[],int size) { //finds the maximum number
    int max_num = arr[0];
    for(int i=1; i<size; i++) 
        if(arr[i] > max_num) 
            max_num = arr[i];
    return max_num;
}

int find_min(int arr[],int size) { //finds the minimum number
    int min_num = arr[0];
    for(int i=1; i<size; i++) 
        if(arr[i] < min_num) 
            min_num = arr[i];
    return min_num;
}

void clear_buffer(void) { //clears the buffer
    int input_char;
    while((input_char=getchar())!='\n'&&input_char!=EOF);
}
