#include <bits/stdc++.h>

//#include<iostream>

using namespace std;
int mult(int k){
    for(int i=k; i<k+10; i+=1)
        {
            for(int j=1; j<=10; j+=1)
            cout << "\t" <<i*j ;
        cout<<""<<endl;
        }
        
        return 0;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int a;
    cin >> a;
    mult(a)
   
    

    
    

}

