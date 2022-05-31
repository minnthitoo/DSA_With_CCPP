//
// Created by minnthitoo on ၃၁-၀၅-၂၂.
//

#include <stdio.h>
#define SIZE 30

int main(){
    int binary = 0;
    int x = 0, y = 1;
    int decimal = 0;
    int octal[SIZE] = {};
    int dec_number = 0;
    int oct_number = 0;
    printf("Enter binary value (0-1):");
    scanf("%d", &binary);

    while (binary != 0){
        dec_number = binary % 10;
        decimal += dec_number*y;
        y*=2;
        binary/=10;
    }
    printf("Your octal decimal number is %d\n", decimal);
    while (decimal != 0){
        oct_number = decimal % 8;
        octal[x] = oct_number;
        x++;
        decimal /= 8;
    }

    printf("Your octal oct_number is ");

    for (int i = x -1; i >=0 ; --i) {
        printf("%d", octal[i]);
    }

}
