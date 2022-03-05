#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <vector<int>> v;
    v.push_back({1,2,3,3});
    v.push_back(vector<int>{1,2,3,4});
    cout << v.size();
    v[0].push_back(32);
    for(auto t: v){
        cout << t.size() <<endl;
    }
   
    return 0;
}