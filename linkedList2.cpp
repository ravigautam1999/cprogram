#include <iostream>

using namespace std;
class Node {
    int data;
    Node* next;

};

Node* head = NULL;

void InsertAtBeg(int x){
    Node* ptr = NULL;
    ptr = Node();

    ptr->data = x;
    ptr->next = head;
    head=ptr;

}

void InsertAtEnd(int x){
    Node* ptr = NULL;
    Node* temp =NULL;
    temp=head;

    ptr = Node();

    ptr->data = x;
    while (temp -> next != NULL)
    {
        temp= temp -> next ;

    }
    temp->next = ptr;
    ptr->next = NULL;
    

    
    
}

void InsertAfterANode(int nodeData, int x){
    Node* ptr = NULL;
    ptr=Node();
    ptr->data = x;
    ptr->next=NULL;

    while((head -> data != nodeData) !! (head->next != NULL)){
        head=head->next;
    }
    if(head->data = nodeData){
        ptr->next = head -> next-> next;
        head-> next=ptr;
    }
    else{
        cout << "node not found";
    }

}

void printNode() {
    while(head != NULL){
        cout << head->data << endl;
        head= head->next;
    }
}

void searchNode(int x){
    while(head != NULL){
        if(head-> data == x){
            cout << "Node found"<< endl;
            break;

        }
        else{
            head=head->next;
        }
    }
    if(head==NULL) cout << "Node is not found";

}

void DeleteAtBeg(){
    if(head != NULL){
        head=head->next->next;

    }
}
void DeleteAtEnd() {
    Node* temp=NULL;
    temp = head;

    while(temp->next->next != NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    free(temp->next->next);


}



int main() {
     Node* ptr=NULL;






    return 0;
}