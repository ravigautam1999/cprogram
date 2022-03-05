#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<pair<int, int>, int>& a,
         pair<pair<int, int>, int>& b)
{
    return a.first.second < b.first.first;
}
  

int main() {
    map<pair<int, int>, int> mp;
    int n;

    cout << "enter no. of edges: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v1,v2,w;
        cin >>v1;
        cin >>v2;
        cin >>w;
        mp.insert({pair<int, int>(v1, v2) , w});


    }
    sort(mp.begin(), mp.end());

    for (auto t: mp){
        cout << t.first.first<< " " << t.first.second <<" "<<t.second<<  endl;
        
    }
    
    return 0;
}