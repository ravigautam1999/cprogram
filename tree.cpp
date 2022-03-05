#include<iostream>
#include<cstdlib>

using namespace std;

struct node {
    int x;
    struct node* left;
    struct node* right;

};

struct node* insert(struct node** newNode, int item){
     struct node* ptr;

     ptr=(struct node*) malloc(sizeof(struct node*));
     ptr->x = item;
     ptr->left=NULL;
     ptr->right=NULL;

    
    if(newNode == NULL){
        (*newNode) = ptr;
    }
    else{
        if((*newNode)->left == NULL && (*newNode)->right == NULL){
            if(((*newNode)->x) > item){
                (*newNode)->left=ptr;
            }
            else{
                (*newNode)->right=ptr;
            }
        }
        else{
            if(((*newNode)->x) > item){
                return insert(&((*newNode)->left), item);
            }
            else{
                return insert(&((*newNode)->right), item);
            }
        }
    }


return (*newNode);
}

struct node* printTree (struct node** Newnode) {
    struct node* temp;
    temp=(*Newnode);
    cout << temp->x << endl;
    if(temp->left != NULL) return printTree(&(temp->left));
    else if (temp->right != NULL) return  printTree(&(temp->right));

return (*Newnode);
}

int main() {
    struct node* root;
    struct node* first;
    struct node* second;

    root = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    


    root->x=4;
    root->left=first;
    root->right=second;

    first->x=5;
    first->left=NULL;
    first->right=NULL;
    
    second->x=6;
    second->left=NULL;
    second->right=NULL;
    
    insert(&root, 1);
    insert(&root, 7);
    insert(&root, 8);
    insert(&root, 9);
   
 
    printTree(&root); 
    

    return 0;
}