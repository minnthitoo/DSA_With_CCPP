//
// Created by minnthitoo on ၀၅-၀၆-၂၂.
//

#include <stdio.h>

int binarySearch();

int main(){
    int numArray[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int key = 0;
    int size = sizeof(numArray) / sizeof(numArray[0]);

    printf("Enter key :");
    scanf("%d", &key);

    int index = binarySearch(numArray, size, key);

    if(index != -1){
        printf("Your data is found at %d\n", index);
    } else{
        printf("Data not found");
    }

    return 0;
}

int binarySearch(const int num[], int s, int key){
    int low = 0;
    int high = s - 1;
    while (low <= high){
        int mid = (low + high) / 2;
        if(key == num[mid]){
            return mid;
        }else if(key < num[mid]){
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return -1;
}
