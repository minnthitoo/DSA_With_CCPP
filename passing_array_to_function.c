//
// Created by minnthitoo on 5/11/22.
//

#include <stdio.h>
#define AGE 10

float average();

int main(){
    float age[AGE] = {0.0};

    for (int i = 0; i < AGE; ++i) {
        printf("Enter your %d age", i);
        scanf("%f", &age[i]);
    }
    float avg = average(age);
    printf("Your average age is %f", avg);

    return 0;
}

float average(float arr[]){
    float sum = 0.0;
    for (int i = 0; i < AGE; ++i) {
        sum += arr[i];
    }
    float total = (sum/AGE);
    return total;
}

