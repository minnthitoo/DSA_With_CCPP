//
// Created by minnthitoo on ၀၈-၀၆-၂၂.
//

#include <iostream>

using namespace std;

class Linkedlist{
public:
    int data;
    Linkedlist* next;
};

void print_l(Linkedlist*);
void append(Linkedlist**, int );


int main(){
    Linkedlist* head = NULL;
    Linkedlist* second = NULL;
    Linkedlist* third = NULL;

    head = new Linkedlist();
    second = new Linkedlist();
    third = new Linkedlist();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout<<"Linked List : \n";
    print_l(head);

    append(&head, 101);
    cout<<"\nAfter append linked list : \n";
    print_l(head);

    return 0;
}

void print_l(Linkedlist* linkedlist){
    while (linkedlist != NULL){
        cout<<linkedlist->data<<" ";
        linkedlist = linkedlist->next;
    }
}

void append(Linkedlist** link_ref, int data){
    Linkedlist* new_list = new Linkedlist();
    Linkedlist* last = *link_ref;

    new_list->data = data;
    new_list->next = nullptr;

    if (*link_ref == nullptr){
        *link_ref = new_list;
        return;
    }

    while (last->next != nullptr){
        last = last->next;
    }
    last->next = new_list;

}

