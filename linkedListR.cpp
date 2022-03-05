#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
    //struct Node* prev;
};
void InsertAtBeg(struct Node** currentNode, int x){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if((*currentNode) == NULL){
        (*currentNode) = temp;
    }
    else{
        temp-> next = (*currentNode);
        (*currentNode) =temp;
    }
}

void InsertAfterPerticularNO(struct Node** currentNode, int x, int value){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    struct Node* ptr = (*currentNode);
    
    temp->data = x;
    temp->next = NULL;
     
    while(ptr != NULL && ptr->data != value){
        ptr = ptr->next;
    }
    if(ptr != NULL){
        temp->next= ptr->next;
        ptr->next = temp;
        cout << x <<" is Inserted after node: " << value << endl;
        
    }
    else{
        cout <<"(\"Insertion Unsuccessful\")"<<" Inserting after position Node: "<< value <<" Not found" << endl;

    }


}


void InsertAtEnd(struct Node** currentNode, int x){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    struct Node* ptr =(*currentNode); 
    temp->data = x;
    temp->next = NULL;
    //temp->prev= (*currentNode);
    if(ptr == NULL){
        (*currentNode) = temp;
    }
    else{
        while(ptr->next != NULL){
            ptr = ptr -> next;
        }
        ptr->next=temp;
    }

}
void print(struct Node** currentNode) {
    struct Node* temp= (*currentNode);
    
    if(temp == NULL){cout << "List is NULL" <<endl;}
    else{
        cout << "List: ";
        while( temp != NULL){
        cout << temp->data << " ";
        temp = temp-> next;
        
    }
    cout << endl;
    }
    
}

struct Node* InsertAtB(struct Node* currentPos, int x){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    temp->data= x;
    temp->next=NULL;

    if(currentPos == NULL){
        currentPos = temp;
    }
    else{
        temp->next= currentPos;
        currentPos=temp;
    }

    return currentPos;
}

void DeleteAtBeg(struct Node** CurrentNode) {
    struct Node* ptr;
    if(*CurrentNode == NULL){
        cout << "Linked List empty" <<endl;
    }
    else{
        
            ptr=(*CurrentNode);
            cout << "Deleted Data Beg: " << ptr->data << endl;
            (*CurrentNode) = (*CurrentNode)->next;

            free(ptr); 
        
        

    }
    
}

void DeletionAtEnd(struct Node** CurrentNode) {
    struct Node* ptr;
    struct Node* temp;
    ptr=(*CurrentNode);

    if(ptr == NULL){
        cout << "List Empty" << endl;

    }
    else{
        while(ptr->next != NULL){
            temp=ptr;
            ptr=ptr->next;
        }
        cout << "Deleted Node End: " << ptr->data << endl;
        temp->next=NULL;
        free(temp->next);
        
    }

}

void DeleteAPerticularNode(struct Node** CurrentNode, int x) {
    struct Node* ptr;
    struct Node* temp;
    ptr = (*CurrentNode);
    if(ptr == NULL){
        cout << "List empty" <<endl;
    }
    else{
        while(ptr != NULL && ptr->data != x){
            temp=ptr;
            ptr=ptr->next;
        }
        if(ptr != NULL){
            //cout <<"temp:"<< temp->data <<endl;
            //cout <<"ptr: "<<ptr->data <<endl;
            temp->next = temp->next->next;
            cout <<"Node "<<ptr->data <<" Deleted Successfully" <<endl;
            free(ptr);
        }
        else{cout << "Node Not Found";}
    }

}

void SearchNode(struct Node** currentNode, int x){
    int c = 0;
    struct Node* ptr =(*currentNode);

    if(*currentNode == NULL){
        cout << "List is empty" <<endl;
    }
    else{
        while(ptr != NULL && ptr->data != x){
            ptr=ptr->next;
            c+=1;
        }
        if(ptr != NULL){
            cout << "Node "<<ptr->data<< " Found at position(start Index 0): " << c <<endl;

        }
        else{cout << "Node " << x <<" Is not found." << endl;}

    
    }


}


int main() {
    struct Node* root =NULL;

    //root = (struct Node*) malloc (sizeof(struct Node*));

   
   // root->prev=NULL;

    
    InsertAtBeg(&root, 6);
    InsertAtBeg(&root, 5);
    InsertAtBeg(&root, 7);
    InsertAtBeg(&root, 2);
    InsertAtBeg(&root, 23);
    InsertAfterPerticularNO(&root, 8, 5); // adding node after node 5
    InsertAfterPerticularNO(&root, 10, 5);
    InsertAfterPerticularNO(&root, 12, 1); // it will return node not found
    InsertAfterPerticularNO(&root, 16, 6);
    InsertAtEnd(&root, 11);

    // we can do with another way

    //root = InsertAtB(root, 5);
    //root = InsertAtB(root, 6);
    //root = InsertAtB(root, 7);
    
   // cout << "befor Deletion List:" <<endl;
    print(&root);

    DeleteAtBeg(&root);
    DeletionAtEnd(&root);
    DeletionAtEnd(&root);
    //cout << "after Deletion List:" << endl;
    
    print(&root);
    DeleteAPerticularNode(&root, 5);
    
    print(&root);
    SearchNode(&root, 10);
    SearchNode(&root, 5);
    

    cout << "\n\n\n\n" << endl;

    int f;
    do{
        int n,a, b;
        cout << "Select your choice\n"<<endl;
        cout << "1.Insert At beginning.\n2.Insert at End.\n3.Insert at after a perticular Node.\n4.Delete At beginning.\n5.Delete at end.\n6.Delete a Perticular Node.\n7.Search a Node.\n8.Display List" <<endl;
        cin >> n;
        switch(n){
            case 1: 
                    cout << "Enter no: ";
                    cin >> a;
                    InsertAtBeg(&root, a);
                    break;
            case 2:
                    cout << "Enter no: ";
                    cin >> a;
                    InsertAtEnd(&root, a);
                    break;
            case 3: 
                    cout << "Enter no which you want insert: ";
                    cin >> a;
                    cout << "Enter no after that node insert: ";
                    cin >> b;
                    InsertAfterPerticularNO(&root, a, b);
                    break;
            case 4: 
                    DeleteAtBeg(&root);
                    break;
            case 5: 
                    DeletionAtEnd(&root);
                    break;
            case 6:
                    cout << "Enter the node which you want to delete: ";
                    cin >> a;
                    DeleteAPerticularNode(&root, a);
                    break;
            case 7:
                    cout << "Enter the node which you want to Search: ";
                    cin >> a;
                    SearchNode(&root, a);
                    break;
            case 8:
                    print(&root);
                    break;
            default:
                    cout << "You enter wrong number" <<endl;
                    break;
                    }
        cout << "If want to continue enter 1 : ";
        cin >> f;
        if(f==1) cout << "congratulations!! you want to continue."<< endl;      
    }while(f==1);

    cout << "\n" <<endl; 
    cout << "See you again (:" <<endl;
    return 0;
}