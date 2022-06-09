//
// Created by minnthitoo on ၀၉-၀၆-၂၂.
//

#include "iostream"

using namespace std;

class Linkedlist{
public:
    int data;
    Linkedlist* next;
};

bool searchl(Linkedlist*, int);
void println(Linkedlist*);

int main(){
    Linkedlist* head = nullptr;
    Linkedlist* second = nullptr;
    Linkedlist* third = nullptr;

    head = new Linkedlist();
    second = new Linkedlist();
    third = new Linkedlist();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    cout<<"Linked list : \n";
    println(head);

    bool st = searchl(head, 20);
    if (st){
        cout<<"\nYour data find\n";
    } else{
        cout<<"\nYour data didn't find\n";
    }


    return 0;
}

bool searchl(Linkedlist* list, int search_data){
    while (list != nullptr){
        if (list->data == search_data){
            return true;
        }
        list = list->next;
    }
    return false;
}

void println(Linkedlist* list){
    while (list != nullptr){
        cout<<list->data<< " ";
        list = list->next;
    }
}
