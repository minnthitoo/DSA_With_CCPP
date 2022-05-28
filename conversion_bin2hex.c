//
// Created by minnthitoo on ၂၈-၀၅-၂၂.
//

#include <stdio.h>
#define SIZE 100

int main(){
    int binary = 0;
    int hexa[SIZE];
    int decimal = 0;
    int number = 0;
    int i = 1;
    int x = 0;

    printf("Enter your binary number (0-1):");
    scanf("%d", &binary);
    while (binary != 0){
        number = binary% 10;
        decimal+= number * i;
        i *= 2;
        binary/=10;
    }
    printf("Decimal %d\n", decimal);

    while (decimal != 0){
        hexa[x] = decimal % 16;
        x++;
        decimal/=16;
    }

    for (int j = x-1; j >= 0; --j) {
        if(hexa[j] > 9){
            printf("%c", hexa[j]+55);
        } else{
            printf("%d", hexa[j]);
        }
    }

    return 0;
}

