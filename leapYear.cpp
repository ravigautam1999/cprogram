#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    
    vector<string> v{ "eryu", "df", "wt"};

    auto t = find(v.begin(), v.end(), "wt");
    for(; t!= v.end(); t++){
        cout << t-v.begin() <<endl;
    }
    cout << "Enter Year: "<<endl;
    cin >> n;
    if(n%100 != 0 && n%4 == 0){
        cout << "Leap Year"<<endl;
    }
    else{
        if(n%100 == 0 && n%400 == 0){
            cout << "Leap Year"<<endl;
        }
        else{
            cout << "Not A Leap Year"<<endl;
        }
    }
    return 0;
}