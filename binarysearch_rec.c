//
// Created by minnthitoo on ၀၅-၀၆-၂၂.
//

#include <stdio.h>

int binarySearch_rec();

int main(){
    int numArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int key = 0;
    int size = sizeof(numArray) / sizeof(numArray[0]);
    printf("Enter your key : ");
    scanf("%d", &key);

    int low = 0;
    int high = size - 1;

    int result = binarySearch_rec(numArray, low, high, key);

    if(result != -1){
        printf("Your data is at %d\n", result);
    } else{
        printf("Your data cannot find\n");
    }

    return 0;
}

int binarySearch_rec(int num[], int low, int high, int key){
    if(low > high){
        return -1;
    }
    int mid = (low + high) / 2;

    if(key == num[mid]){
        return mid;
    } else if(key < num[mid]){
        return binarySearch_rec(num, low, mid - 1, key);
    } else{
        return binarySearch_rec(num, mid + 1, high, key);
    }
}