//
// Created by minnthitoo on 5/10/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DATA_SIZE 1000
#define FRE_SIZE 11

int main(){
    int data[DATA_SIZE];
    int frequency[FRE_SIZE] = {0};
    time_t tm;
    srand(&tm);
    for (int i = 0; i < DATA_SIZE; ++i) {
        data[i] = (rand()%10)+1;
    }
    for (int j = 0; j < DATA_SIZE; ++j) {
        ++frequency[data[j]];
    }
    printf("%s%15s\n", "Number", "Frequency");
    for (int k = 1; k < FRE_SIZE; ++k) {
        printf("%6d%15d\n", k,  frequency[k]);
    }


    return 0;
}

