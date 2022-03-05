#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> v[2];
    vector<int> v1;
    vector<int> v2;

   

    v[0].push_back(1);
    v[0].push_back(2);
    v[0].push_back(3);
    v[1].push_back(4);
    v[1].push_back(5);
    v[1].push_back(6);
    v[2].push_back(7);
    v[2].push_back(8);
    v[2].push_back(9);
    for(auto &t: v){
        for(auto &r: t){
            cout << r<< endl;
        }
    }

  

    


    cout << "hello";
    return 0;
}