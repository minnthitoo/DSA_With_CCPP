//
// Created by minnthitoo on ၀၆-၀၆-၂၂.
//

#include <stdio.h>

void bubbleSort();

int main(){
    int numArray[] = {20, 30, 50, 10, 3, 5, 22, 40, 99, 110};
    int size = sizeof(numArray) / sizeof(numArray[0]);
    bubbleSort(numArray, size);
    return 0;
}

void bubbleSort(int nums[], int size){
    int tmp;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < (size - i) - 1; ++j) {
            if(nums[j] > nums[j+1]){
                tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }
    printf("Sorted datas are : \n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", nums[i]);
    }
}

