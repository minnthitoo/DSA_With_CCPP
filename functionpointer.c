//
// Created by minnthitoo on ၀၃-၀၆-၂၂.
//
#include <stdio.h>

int * check();

int main(){
    int a = 40;
    int b = 50;
    int *nPtr;
    printf("Memory address of a is => %x\n", &a);
    printf("Memory address of b is => %x\n", &b);

    nPtr = check(&a, &b);

    printf("%d is greater\n",  nPtr);

    return 0;
}

int * check(int *x, int *y){
    if(*x > *y){
        printf("Memory address of x is => %x\n", x);
        return *x;
    } else{
        printf("Memory address of y is => %x\n", y);
        return *y;
    }
}
