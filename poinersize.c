//
// Created by minnthitoo on ၀၃-၀၆-၂၂.
//

#include <stdio.h>

int main(){
    int intArr[] = {1, 2, 3, 4};
    int *intPtr = intArr;
    char charArr[] = {1, 2, 3, 4};;
    char *charPtr = charArr;

    printf("Size of intArr => %d byte\n", sizeof(intArr));
    printf("Size of intPtr => %d byte\n", sizeof(intPtr));

    printf("Size of charArr => %d byte\n", sizeof(charArr));
    printf("Size of charPtr => %d byte\n", sizeof(charPtr));
    /*
     * Pointer size is depend on cpu architecture eg, on 32 bit cpu pointer size is 4byte, and 64 bit cpu, pointer size is 8 byte
     */

    return 0;
}

