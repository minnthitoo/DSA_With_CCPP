//
// Created by minnthitoo on ၀၃-၀၆-၂၂.
//

#include <stdio.h>

void swap();

int main(){
    int x = 10;
    int y = 20;

    printf("The value of x before swap => %d\n", x);
    printf("The value of y before swap => %d\n", y);

    swap(&x, &y);

    printf("The value of x after swap => %d\n", x);
    printf("The value of y after swap => %d\n", y);

    return 0;
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;

}

