#include<iostream>
#include<cstdlib>

using namespace std;

struct Node {
    int x;
    string y;
    struct Node *p;
} ;

void NewNode(struct Node** root, int t, string f){
    struct Node* ptr = (*root);
    struct Node* newNode, temp;

    
    newNode = (struct Node *) malloc (sizeof(struct Node));

    newNode->x = t;
    newNode->y= f;
    newNode->p = NULL;
    if(ptr == NULL){
        (*root) = newNode; 
    }
    else{
        newNode->p = ptr;
        (*root) = newNode;

    }

        
    

}

void print(struct Node** root){
    struct Node* ptr = (*root);
    if((*root) == NULL) cout << "empty";
    while(ptr != NULL){
        cout << ptr->x << " " << ptr->y << endl;
        ptr = ptr->p;
    }

}


int main() {
    struct Node* s = NULL, temp;
    

    NewNode(&s, 2,"hert");
    NewNode(&s, 3,"rty");
    NewNode(&s, 4,"fgh");
    NewNode(&s, 5,"wsr");
    NewNode(&s, 6,"uio");
    

    print(&s);

    return 0;
}