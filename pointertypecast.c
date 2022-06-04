//
// Created by minnthitoo on ၀၄-၀၆-၂၂.
//

#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5,6, 7, 8};
    int *onePtr = &arr[0];
    int *twoPtr = onePtr + 5;

    printf("Number of bytes between two pointers are %ld\n", (char *)twoPtr - (char *)onePtr);
    printf("Number of bytes between two pointers are %ld\n", (float *)twoPtr - (float *)onePtr);

    /*
     * formula is x * sizeof(original) / sizeof(new)
     *  5 * 4 / 1 (for char coz char size is 1byte)
     *  5 * 4 / 4 (for float coz float size is 4bytes)
     */


    return 0;
}
