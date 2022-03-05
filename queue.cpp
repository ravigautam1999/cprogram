#include<iostream>
#define Max 50
using namespace std;

int rear=-1, front=-1;
int queue[Max];

void Insert(int x){
    if(rear >= Max){cout << "Queue over flow";}
    else if(rear==-1 && front == -1){
        rear=front=0;
        queue[rear]=x;

    }
    else{
        rear+=1;
        queue[rear]=x;
    }

}

void Deletetion(){
    int x;

    if (front >= rear || rear == -1){
        cout << "queue underflow";
    }
    else{
      x=queue[front];
      cout << "Deleted Item is : " << x << endl;
      front+=1;    
    }
}

void printQ() {
    cout << "Queue is: "<< endl;
    
    for (int i=front ; i<=rear; i++){
        cout << queue[i] << endl;
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
            Insert(x);
            break;

            case 2: Deletetion();
            break;
            
            case 3: printQ();
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