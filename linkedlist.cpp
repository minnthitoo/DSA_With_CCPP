//
// Created by minnthitoo on ၀၇-၀၆-၂၂.
//
#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
};

int main(){
    Node* head = NULL;
    Node* secode = NULL;
    Node* third = NULL;

    head = new Node();
    secode = new Node();
    third = new Node();

    head->data = 1;
    head->next = secode;

    secode->data = 2;
    secode->next = third;

    third->data = 3;
    third->next = NULL;

    dt_print()


    return 0;
}

