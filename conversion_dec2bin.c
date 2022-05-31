//
// Created by minnthitoo on ၃၁-၀၅-၂၂.
//
#include <stdio.h>
#define SIZE 50

int main(){
    int decimal = 0, i = 0;
    int bin[SIZE] = {};
    printf("Enter your Decimal number (0-9):");
    scanf("%d", &decimal);

    while (decimal != 0){
        bin[i] = decimal % 2;
        i++;
        decimal/=2;
    }
    printf("Your decimal number is ");
    for (int j = i-1; j >=0 ; --j) {
        printf("%d", bin[j]);
    }
}
