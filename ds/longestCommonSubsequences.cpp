#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    
    cout << "Enter Two string: "<< endl;
    cin >>a;
    cin >>b;
    vector <char> A(a.begin(), a.end());
    vector <char> B(b.begin(), b.end());
    int n=A.size();
    int m=B.size();
    int M[n+1][m+1];
    int Flag[n][m][2]; //up:- u, Left:- l, Diagonal:- d
    int c=0;

    for(int i=0; i< n+1; i++){
        for(int j=0; j< m+1; j++){
            if(i==0 or j==0) 
                M[i][j] = 0;
            else if (A.at(i-1) == B.at(j-1)){
                 M[i][j] = (M[i-1][j-1] + 1);
                 Flag[i-1][j-1][0] = i;
                 Flag[i-1][j-1][1] = j;
                 if(c < M[i][j]) c= M[i][j];
            }
            else{
                M[i][j] = max(M[i-1][j], M[i][j-1]);
                if(M[i-1][j] > M[i][j-1]) {
                    Flag[i-1][j-1][0] = i-1;
                    Flag[i-1][j-1][1] = j;
                }
                else{
                    Flag[i-1][j-1][0] = i;
                    Flag[i-1][j-1][1] = j-1;
                }
            }

        }
    }

    for(int i=0; i< n+1; i++){
        for(int j=0; j< m+1; j++){
            
            cout << M[i][j];
            if(i != 0 && j != 0){
                cout <<"["<<Flag[i-1][j-1][0] << ", "<< Flag[i-1][j-1][1] << " ]" << " ";
            }
            else {
                cout << "\t";
            }

        }
        cout << endl;
    }
    cout << "Longest Subsequence: "<< c << endl;
    
    // int o=n+1, p=m+1; 
    
    // while(o != 0 || p != 0){
    //     cout << "o: "<< o<< "p: "<< p<< endl;
    //     int x=Flag[o-1][p-1][0];
    //     int y=Flag[o-1][p-1][1];
    //     if ((o-1) == x && (p-1) == y){
    //         cout << B.at(o-1) << " ";
    //         o=x; p=y;
    //     }
    //     else{
    //         o=x; p=y;
    //     }
        


    // }

    
    return 0;
}