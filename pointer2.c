//
// Created by minnthitoo on ၀၁-၀၆-၂၂.
//
#include <stdio.h>

int main(){
    int num = 10;
    int *numPtr;
    printf("The address of num => %x\n", &num);
    printf("The value of num => %d\n", num);

    numPtr = &num;
    printf("The address of numPtr => %x\n", numPtr);
    printf("The value of the numPtr => %d\n", *numPtr);

    num = 20;
    printf("The value of num => %d\n", num);
    printf("The value of numPtr => %d\n", *numPtr);

    *numPtr = 30;
    printf("The value of num => %d\n", num);
    printf("The value of numPtr => %d\n", *numPtr);



    return 0;
}

