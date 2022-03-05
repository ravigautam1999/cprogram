#include <iostream>

using namespace std;

class Node {
   public: 
   int x;
   Node* p;
};

void PrintNode(Node** head){
    while(head != NULL){
        cout << head ->x << endl;
        head=head->p;
    }
}

void push_beg(Node** head, int x){
    Node* newNode = NULL;
    newNode = new Node();
    
    newNode->x=x;
    newNode->p=(*head);

    (*head) = newNode;


}

int main(){

    Node* first = NULL;
    Node* second = NULL;
    Node* last = NULL;
    
    first = new Node();
    second = new Node();
    last = new Node();

    first->x=5;
    first->p=second;
    second->x=6;
    second->p=last;
    last->x=7;
    last->p=NULL;

    while(first != NULL){
        cout << first->x;
        first = first-> p;
    }

    cout << "hello";
    return 0;
}