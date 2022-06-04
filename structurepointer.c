//
// Created by minnthitoo on ၀၄-၀၆-၂၂.
//

#include <stdio.h>

struct collect{
    char *student_name;
    int *studentid;
    int *age;
}stusent_data;

int main(){
    char name[20];
    char *data = name;
    printf("Enter your name : ");
    scanf("%s", data);
    printf("Enter student id : ");
    scanf("%d", &stusent_data.studentid);
    printf("Enter student age :");
    scanf("%d", &stusent_data.age);

    stusent_data.student_name = data;

    printf("Student name is %s\n", stusent_data.student_name);
    printf("Student id is %d\n", stusent_data.studentid);
    printf("Student age is %d\n", stusent_data.age);

    return 0;

}

