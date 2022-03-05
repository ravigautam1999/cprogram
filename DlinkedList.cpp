#include <iostream>
using namespace std;

class Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void InsertAtBeg(int x) {
    Node *ptr;
    ptr = Node();

    ptr->data=x;
    ptr->prev = NULL;
    ptr->next=NULL;

    if(head == NULL){
        ptr->prev= head;
        head=ptr;

    }

    else{
        head=ptr;
        ptr->prev=head;
        ptr->next=head->next;
        head->next=ptr;
    }

}

void InsertAtEnd() {
    Node* ptr;
}



int main(){

    cout << "hello";
    return 0;
}
