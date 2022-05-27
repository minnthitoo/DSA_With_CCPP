//
// Created by minnthitoo on ၂၇-၀၅-၂၂.
//
#include <stdio.h>

int main(){
    char c;
    printf("Enter a word:");
    scanf("%c", &c);
    if(((c>='A') && (c<='Z')) || ((c>='a') && (c<='z'))){
        printf("It is alphabet");
    }else{
        printf("Other character");
    }

    return 0;a
}
