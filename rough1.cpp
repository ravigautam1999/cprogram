#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<vector<int>> v(n);
    stack<int> s;
    string s1="*";
    
 
    cout << "Enter No. of Nodes: "<<endl;
    cin>> n;

    int x=12;
    stringstream geegs(s1);
    geegs >> x;
    cout << x;
    

    int a, b;
    for(int i=0;i<n; i++){
         cout << "enter no. of node you want to enter with node " << i << endl;
         cin >> a;
         cout << "enter "<< a << "nodes: 5"<<endl;
          for(int j=0;j<a; j++){
             cin >> b;
             v[i].push_back(b);        
          } 
         

    }
    for(auto &t: v){
        cout << t.size() <<endl;
    }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // string s="wksjdjt";
    // map<string, vector<string>> mp;
    // vector<vector<string>> st;

    // mp["sdfg"].push_back("sdfgh");
    // mp["sefg"].push_back("sdrgh");
    // mp["sdfg"].push_back("sdrrrrh");
    
    // cout << mp.size();
    // st.push_back(mp["sdfg"]);
    
    // sort(s.begin(), s.end());
    // cout << s;
    return 0;
}