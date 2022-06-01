//
// Created by minnthitoo on ၃၁-၀၅-၂၂.
//
#include <stdio.h>
#include <math.h>
#define SIZE 30

int main(){
    char hexa[SIZE];
    int length, decimal = 0, x = 0;
    int rev_bin[SIZE];
    printf("Enter your hexadecimal number => ");
    fgets(hexa, SIZE, stdin);
    for (length = 0; hexa[length] != '\0' ; ++length);
    length = length - 1;
    for (int i = 0; hexa[i] != '\0'; ++i, --length) {
        if(hexa[i] >= '0' && hexa[i] <= '9'){
            decimal += (hexa[i] - '0') * (int) pow(16, length-1);
        }
        if(hexa[i] >= 'A' && hexa[i] <= 'F'){
            decimal += (hexa[i] - 55) * (int) pow(16, length-1);
        }
    }
    printf("Your decimal value is => %d\n", decimal);
    while (decimal != 0){
        rev_bin[x] = decimal%2;
        x++;
        decimal/=2;
    }
    for (int i = x-1; i >= 0; --i) {
        printf("%d", rev_bin[i]);
    }

    return 0;
}