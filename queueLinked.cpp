#include <iostream>

using namespace std;

class Node {
   public:  int data;
            Node* next;
};

Node* front=NULL;
Node* rear=NULL;

void insert(int x){
    Node* ptr=NULL;
    

    ptr->data = x;
    ptr->next = NULL;
    
    if(front == NULL && rear == NULL){
       front=ptr;
       rear=ptr;  
     }
     else{
         rear->next = ptr;

     }

}

void Deletion() {
    if (front == NULL){
        cout << "queue empty" << endl;
    }
    else{
        front=front-> next;
        cout << "deleted" << front->data;
        //free(front)
    }
}

void PrintQ(){
    Node* temp;
    temp = front;

    while(temp != NULL){
        cout << temp-> data << endl;
        temp -> next;

    }
}

int main() {
    int a, x;
    char d;
    int s;

    do{

        cout << "enter your choice: " << endl;
        cout << "1.Insertion \n2.Deletion \n3.Print Queue\n";
        cin >> a;

        switch(a){
            
            
            case 1: 
            cout << "enter no: ";
            cin>> x;
                    insert(x);
            break;

            case 2: Deletion();
            break;
            
            case 3: PrintQ();
            break;

            default: cout<< "wrong choice";

        }
        cout << "want to continue y or n : " << endl;
        cin >> d;
        if (d=='y'){s=1;}
        else{s=0;}
    }while(s);



    return 0;
}