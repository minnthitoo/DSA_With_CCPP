//
// Created by minnthitoo on ၀၆-၀၆-၂၂.
//

#include <stdio.h>

void insertionSort();

int main(){

    int numArr[] = {21, 30, 11, 10, 40, 50, 22, 100, 33, 55, 60};
    int size = sizeof(numArr) / sizeof(numArr[0]);
    insertionSort(numArr, size);
    return 0;
}

void insertionSort(int nums[], int size){
    int tamp;
    int j;
    for (int i = 1; i < size; ++i) {
        j = i;
        while (j > 0 && nums[j] < nums[j - 1]){
            tamp = nums[j - 1];
            nums[j - 1] = nums[j];
            nums[j] = tamp;
            j--;
        }
    }
    printf("Sorted datas are : ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", nums[i]);
    }
}
