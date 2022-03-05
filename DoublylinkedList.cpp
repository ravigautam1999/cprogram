#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;

};

void InsertAtBeg(struct Node** currentNode, int x){
    struct Node* ptr=(*currentNode);
    struct Node* temp;

    temp = (struct Node*) malloc (sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    temp->prev=NULL;

    if(*currentNode == NULL){
        
        temp->prev=*currentNode;
        *currentNode = temp;
    }
    else{
        
        temp->prev = *currentNode;
        temp->next= (*currentNode);
        *currentNode = temp; 
    }
}

void InsertAtEnd(struct Node** currentNode, int x){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    struct Node* ptr=(*currentNode);

    temp->data=x;
    temp->prev=NULL;
    temp->next=NULL;

    if(ptr == NULL){
        temp->prev=(*currentNode);
        (*currentNode)=temp;

    }
    else{
        while(ptr->next != NULL){
            ptr= ptr->next;
        }
        temp->prev=ptr;
        ptr->next=temp;

    }
}

void InsertAfterPerticularNode(struct Node** currentNode, int x, int value){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    struct Node* ptr=(*currentNode);
    temp->data=x;
    temp->prev=NULL;
    temp->next=NULL;

    if(ptr == NULL) cout << "List empty" <<endl;
    else{
        while(ptr != NULL && ptr->data != value){
            ptr=ptr->next;
        }
        if(ptr != NULL){
            
            temp->prev=ptr;
            temp->next=ptr->next;
            ptr->next->prev=temp;
            ptr->next=temp;
            
            cout << "Insertion Successful" <<endl;
        }
        else{
            cout <<"(\"Insertion Unsuccessful\")"<<" Inserting after position Node: "<< value <<" Not found" << endl;
        }
    }
}

void DeleteAtBeg(struct Node** currentNode){
    struct Node* ptr=(*currentNode);

    if(ptr==NULL) cout << "List empty"<<endl;
    else{
        (*currentNode)->next->prev=(*currentNode);
        (*currentNode)=(*currentNode)->next;
        cout << "Deleted Node: " << (*currentNode)->data<<endl;
    }

}

void DeleteAtEnd(struct Node** currentNode){
    struct Node* ptr=(*currentNode);
    struct Node* temp;

    if (ptr == NULL) cout << "List empty";
    else{
        while(ptr-> next != NULL){
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        
        cout <<ptr->data<<" Deleted Successfully" <<endl;
        free(ptr);
        
    }

}

void DeletePerticularNode(struct Node** currentNode, int x){
    struct Node* ptr=(*currentNode);
    struct Node* temp;

    if(ptr == NULL) cout << "List Empty" << endl;
    else{
        while(ptr->next != NULL && ptr->data){
            ptr=ptr->next;
        }

        if(ptr != NULL){
            temp=ptr;
            ptr->prev->next=ptr->next;
            ptr->next->prev=temp->prev;
            cout <<ptr->data<<" Node Deleted" << endl;
            free(ptr);
        }
    }

}

void print(struct Node** currentNode){
    struct Node* ptr;
    struct Node* temp;

    ptr=(*currentNode);
    if(ptr==NULL) cout << "LIst empty" << endl;
    else{
        cout << "List: ";
        while(ptr != NULL){
            cout << ptr->data << " " ;
            temp=ptr;
            ptr=ptr->next;
        }
        cout << endl;
       

    }
}


int main() {
    struct Node* root=NULL;
    
    InsertAtBeg(&root, 5);
    InsertAtBeg(&root, 6);
    InsertAtBeg(&root, 7);
    InsertAtBeg(&root, 8);
    InsertAtEnd(&root, 2);
    InsertAtEnd(&root, 3);
    InsertAfterPerticularNode(&root, 12, 6);
    InsertAfterPerticularNode(&root, 11, 5);
    InsertAfterPerticularNode(&root, 10, 8);



    print(&root);
    DeleteAtBeg(&root);
    DeleteAtEnd(&root);
    DeletePerticularNode(&root, 12);
    print(&root);
    

    
    return 0;
}
