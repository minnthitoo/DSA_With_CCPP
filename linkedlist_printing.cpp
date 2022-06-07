//
// Created by minnthitoo on ၀၇-၀၆-၂၂.
//

#include <iostream>

using namespace std;

class Node{
public:
    int data_one;
    int data_two;
    Node* next;
};

void print_l(Node*);

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data_one = 1;
    head->data_two = 101;
    head->next = second;

    second->data_one = 2;
    second->data_two = 102;
    second->next = third;

    third->data_one = 3;
    third->data_two = 103;
    third->next = NULL;

    print_l(head);

    return 0;
}

void print_l(Node* node){
    while (node != NULL){
        cout<<node->data_one<<" "<<node->data_two<<endl;
        node = node->next;
    }
}

