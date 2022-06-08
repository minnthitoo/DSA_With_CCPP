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

void print_l(Node*);

void push(Node**, int);

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    cout<<"Before push data : \n";
    print_l(head);

    push(&head, 100);

    cout<<"\nAfter push data : \n";
    print_l(head);

    push(&head, 101);

    cout<<"\nAnother push data : \n";
    print_l(head);

    return 0;
}

void push(Node** head_ref, int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void print_l(Node* node){
    while (node != NULL){
        cout<<node->data <<" ";
        node = node->next;
    }
}
