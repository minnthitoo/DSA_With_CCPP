//
// Created by minnthitoo on ၂၇-၀၅-၂၂.
//

#include <stdio.h>
#define SIZE 30

char binToDec();

int main(){
    char arr[SIZE];
    int decValue;
    printf("Enter binary number (0-1):");
    gets(arr);
    decValue = binToDec(arr);
    if(decValue == -1){
        printf("Enter 1 or 0");
    } else{
        printf("Your decimal value is %d",decValue);
    }
    return 0;
}

char binToDec(char data[]){
    int i = 0;
    int number = 0;
    int result = 0;

    while (data[i] != '\0'){
        number = data[i] - 48;
        if (number != 0 && number != 1){
            return -1;
        }
        result = (result * 2) + number;
        i++;
    }
    return result;
}

