//
// Created by minnthitoo on 5/9/22.
//
#include <stdio.h>
#define INDEX 5  //symbolic constant

int main(){
    int num[INDEX];
    for (int i = 0; i < INDEX; ++i) {
        num[i] = 2 + 2 * i;
    }
    for (int j = 0; j < INDEX; ++j) {
        printf("%d\n", num[j]);
    }
}

