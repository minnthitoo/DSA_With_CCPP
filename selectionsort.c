//
// Created by minnthitoo on ၀၆-၀၆-၂၂.
//

#include <stdio.h>

void selectionSort();
void swap();

int main(){
    int numArray[] = {21, 3, 1, 91, 30, 40, 55, 41, 1, 3, 2};
    int size = sizeof(numArray) / sizeof(numArray[0]);
    printf("Before sorted data : \n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", numArray[i]);
    }
    selectionSort(numArray, size);
    printf("\nSorted data : \n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", numArray[i]);
    }
    return 0;
}

void selectionSort(int num[], int size){

    int min, tamp;
    for (int i = 0; i < size - 1; ++i) {
        min = i;
        for (int j = i + 1; j < size; ++j) {
            if(num[min] > num[j]){
                min = j;
            }
        }
        swap(num, min, i);
    }
}
void swap(int num[], int min, int index){
    int tamp = num[min];
    num[min] = num[index];
    num[index] = tamp;
}

