#include <iostream>
#include <cstdlib>

using namespace std;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

};

void InsertNode(struct Node** currentNode, int x){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=(*currentNode);

    ptr->data=x;
    ptr->left=NULL;
    ptr->right=NULL;

    if(temp == NULL){
        temp=ptr;
        return ;
    }
    else{
        if(temp->data > x){
            temp=temp->left;
            InsertNode(&temp, x);
        }
        else{
            temp=temp->right;
            InsertNode(&temp, x);
        }
    }

}

void PrintNode(struct Node** currentNode){
    struct Node* temp=(*currentNode);
    if(temp != NULL){
        cout << temp->data;
    }



}




int main() {
    struct Node* root = NULL;

    InsertNode(&root, 2);
    InsertNode(&root, 3);
    InsertNode(&root, 4);
    InsertNode(&root, 1);
    InsertNode(&root, 5);

    cout << root->left->data;

    PrintNode(&root);

    
   
    
   



    cout << "hello";
    return 0;
}