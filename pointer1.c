//
// Created by minnthitoo on ၀၁-၀၆-၂၂.
//
#include <stdio.h>

int main(){
    int num = 10;
    int *numPtr = &num;
    printf("%d", num);
    printf("\n%d", &num);
    printf("\n%d", numPtr);
    printf("\n%d", *numPtr);
    return 0;
}

