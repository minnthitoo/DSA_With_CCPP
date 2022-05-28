//
// Created by minnthitoo on ၂၈-၀၅-၂၂.
//

#include <stdio.h>

int main(){
    int binary = 0;
    int decimal = 0;
    int number = 0;
    int i = 1;


    printf("Enter binary number(0-1):");
    scanf("%d", &binary);

    while (binary != 0){
        number = binary%10;
        decimal+= number*i;
        i*=2;
        binary /= 10;
    }
    printf("Your decimal value is %d", decimal);
    return 0;
}
