//
// Created by minnthitoo on ၂၇-၀၅-၂၂.
//

#include <stdio.h>

int main(){
    char c;
    int smallV, bigV;
    printf("Enter character:");
    scanf("%c", &c);
    smallV = (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');
    bigV = (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U');
    if(smallV || bigV){
        printf("%c Your character is vowel", c);
    } else{
        printf("%c Your character is other", c);
    }

}

