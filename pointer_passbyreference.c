//
// Created by minnthitoo on ၀၃-၀၆-၂၂.
//
#include <stdio.h>

void getDta(int *numPtr){
    *numPtr = 50;
}

int main(){

    int x = 100;
    getDta(&x);
    printf("%d", x);

}
