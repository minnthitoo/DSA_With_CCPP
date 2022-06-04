//
// Created by minnthitoo on ၀၄-၀၆-၂၂.
//

#include <stdio.h>

struct collect{
    int data;
    char c;
    float fl;
};
struct wvalue{
    int a;
    char b;
    float c;
}str_name;
int main(){

    struct collect scollect;
    scollect.data = 20;
    scollect.c = 'C';
    scollect.fl = 2.4;

    str_name.a  = 30;
    str_name.b  = 'B';
    str_name.c  = 3.4;

    printf("Collect structure data is %d\n", scollect.data);
    printf("Collect structure char is %c\n", scollect.c);
    printf("Collect structure float is %f\n\n", scollect.fl);

    printf("wvalue structure a is %d\n", str_name.a);
    printf("wvale structure b is %c\n", str_name.b);
    printf("wvalue structure c is %f\n", str_name.c);

}
