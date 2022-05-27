//
// Created by minnthitoo on ၂၆-၀၅-၂၂.
//
#include <stdio.h>
#include <string.h>

int main(){
    char uname[] = "admin@gmail.com";
    char pass[] = "admin";
    char username[20];
    char password[20];

    printf("Enter username:");
    gets(username);
    printf("Enter password:");
    gets(password);

    if((strcmp(uname, username) == 0) && strcmp(pass, password)== 0){
        printf("Access granted");
    }else{
        printf("Access denied");
    }

    return 0;
}
