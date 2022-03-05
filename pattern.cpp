#include<iostream>

using namespace std;

void pattern1(){
    for (int i = 0; i <= 5; i++){
        for (int j = 1; j <= 5-i; j++){
            cout <<" "<<j;
        }
        cout <<" "<< endl;
    }
}

void pattern2(){
     int k=1;
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            cout <<" "<<k;
            k=1-k;
        }
        if (i%2 == 0){
            k=1-k;
        }
        cout <<" "<< endl;
        
    }
}

void pattern3(){
     for (int i = 0; i <= 5; i++){
        for (int k = 0; k < 5-i; k++){
            cout << " " ;
        }
        for (int j = 1; j <= i; j++){
            cout <<" "<<j;
        }
        cout <<" "<< endl;
    }
}

void pattern4(){
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            cout << j <<" ";
        }
        cout << endl; 
    }
    
}

int main(){
    /*--------------------------------------------------------------*/
    /*--------------------------------------------------------------*/
    /*--------------------------------------------------------------*/
    
   
}