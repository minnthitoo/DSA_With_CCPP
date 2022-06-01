//
// Created by minnthitoo on ၀၁-၀၆-၂၂.
//
#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        printf("The address of arr[%d] is %x\n", i, &arr[i]);
    }

    /*
     * the address of array are depand on data type
     * int is 4bytes so the address of each array index is 4bytes
     */

    return 0;
}

