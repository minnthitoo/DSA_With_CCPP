//
// Created by minnthitoo on ၀၉-၀၆-၂၂.
//

#include <iostream>

using namespace std;

class LinkedList{
public:
    int data;
    LinkedList* next;
};

void print_l(LinkedList*);
void insert(LinkedList*, int);

int main(){
    LinkedList* head = NULL;
    LinkedList* second = NULL;
    LinkedList* third = NULL;

    head = new LinkedList();
    second = new LinkedList();
    third = new LinkedList();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout<<"Linkedlist : \n";
    print_l(head);

    cout<<"Linkedlist insert after : \n";
    insert(second, 100);
    print_l(head);

    return 0;
}

void insert(LinkedList* prev_l, int new_data){
    if (prev_l == nullptr){
        cout<<"You cannot insert null linked list\n";
        return;
    }
    LinkedList* new_l = new LinkedList();
    new_l->data = new_data;

    new_l->next = prev_l->next;
    prev_l->next = new_l;

}

void print_l(LinkedList* linkedList){
    while (linkedList != NULL){
        cout<<linkedList->data<<" ";
        linkedList = linkedList->next;
    }
}

