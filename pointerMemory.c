//
// Created by minnthitoo on ၀၃-၀၆-၂၂.
//

#include <stdio.h>

int main(){
    int numArr[] = {1, 2, 3, 4, 5, 6};
    int *ptr = &numArr[0]; // ptr = numArr;
    int *ptr2 = ptr + 3; // p2 = p1 + (n * sizeof(ptr))
    printf("Data of ptr2 => %d\n", *ptr2);
    printf("The size of ptr1 => %d\n", sizeof(ptr));

    printf("The address of index 0 => %d\n", &numArr[0]);
    printf("The address of index 1 => %d\n", &numArr[1]);
    printf("The address of index 2 => %d\n", &numArr[2]);
    printf("The address of index 3 => %d\n", &numArr[3]);
    printf("The address of index 4 => %d\n", &numArr[4]);
    printf("The address of index 5 => %d\n", &numArr[5]);

    int *ptr3;
    ptr3 = ptr2 - ptr;
    printf("The size of ptr3 is %d\n", ptr3);

    /*
     * 4d9e0da0 + (3 * 4)
     * 4d9e0da0 + c coz hexadecimal
     *
     */
}
