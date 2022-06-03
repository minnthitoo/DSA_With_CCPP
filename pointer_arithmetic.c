//
// Created by minnthitoo on ၀၃-၀၆-၂၂.
//

#include <stdio.h>

int main(){
    int *onePtr;
    int *twoPtr;
    int *threePtr;
    int a = 20;
    int b = 10;
    int c = 0;

    onePtr = &a;
    twoPtr = &b;

    c = *onePtr + *twoPtr;

    printf("The address of *onePtr is => %x\n", onePtr);
    printf("The address of *twoPtr is => %x\n", twoPtr);

    printf("The value of c is => %d\n", c);

    onePtr++;
    printf("The address of *onePtr is => %x\n", onePtr);

    twoPtr--;
    printf("The address of *twoPtr is => %x\n", twoPtr);

    threePtr = onePtr - twoPtr;
    printf("The address of *threePtr is => %x\n", threePtr);




    return  0;
}
