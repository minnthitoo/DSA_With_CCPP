//
// Created by minnthitoo on ၀၁-၀၆-၂၂.
//
#include <stdio.h>

int main(){
    char *charPtr;
    charPtr = "Minn thit Oo";

    printf("My name is %s", charPtr);
    printf("\nThe size of charPtr is %lu", sizeof(charPtr));
    /*
     * The size of char pointer on 32 bit processor => 4 bytes
     * The size of char pointer on 64 bit processor => 8 bytes
     */


    return 0;
}

