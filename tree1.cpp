#include <iostream>
#include <cstdlib>


using namespace std;


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

void pushData(struct Node** ptr, int x){
    struct Node* temp = (*ptr);
    struct Node* newNode = (struct Node*) malloc (sizeof(struct Node));

    if(temp == NULL){
        temp=newNode;
    }
    else{
        while(temp != NULL){
            if(temp->data >= x){
                temp=temp->left;
            }
            else{
                temp=temp->right;
            }
        }
        temp=newNode;
    }
    (*ptr)=temp;
   

}

void traverse(struct Node** ptr){
    struct Node* temp = (*ptr);
    if(temp == NULL){
        return ;
    }
    cout<< temp->data << " ";
    traverse(&(temp->right));
    traverse(&(temp->left));

}




int main() {
    struct Node* root = new Node(1);


    cout << "data: " << root->data;
    

    return 0;
}