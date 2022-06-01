//
// Created by minnthitoo on ၀၁-၀၆-၂၂.
//
#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrPtr;
    arrPtr = arr;

    int *anotherPtr;
    anotherPtr = &arr[0];

    printf("The address of arrPtr => %x\n", arrPtr);
    printf("The address of anotherPtr => %x\n", anotherPtr);
    /*
     * The address of array is the address of first index of array
     */

    return 0;
}

