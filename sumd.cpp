#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fact(int x){
    if(x==1) return 1;
    else return x*fact(x-1);
}


int main(){
    int n;
    vector<int> v;
    set<int>d22={1,2,3};
    d22.clear();
    cout << "d"<< d22.size();
    string s1 = "this is a string";
    
    string s2 = "2345678";
    char d[30] = "23456";
    s2.resize(1000000000);
    
    
    cout << "s2 size: "<<s2.size();
    reverse(s1.begin(),s1.end());
    char e='r';
    auto r = find(s1.begin(), s1.end(), e);
    if(r != s1.end()) cout << "found: "<< (r-s1.begin())<< endl;
    else cout << "not found"<< endl;
    cout <<"s1: "<<s1.c_str()<< endl;
    char f[20];
     
     int pos=2, len = 4;
     s1.copy(f, len,pos);

     set<char> w(s1.begin(), s1.end());
     for(auto &t: w){
         cout << t << endl;
     }
     s1=s1.substr(0,4);
     map<int, vector<string>> f1;
     set<int >u{1,2,3,4,5,6};
     //f1[0].push_back("e");
     int sum=0; 
     
     int64_t c=0;
     unsigned long long int t;
     cout <<  sizeof(int);
     cout << "sum: "<< INT64_MAX<< c;;

    
     cout <<"size: "<<f1[0].size();
    // s: Pointer to an array of characters. The array shall contain enough storage for the copied characters.
    // len: Number of characters to copy (if the string is shorter, as many characters as possible are copied).
    // pos: Position of the first character to be copied.
    // If this is greater than the string length, it throws out_of_range.
    // Note: The first character in the string is denoted by a value of 0 (not 1).

    cout << f<< endl;
    
    
    
    
    // cout << 2E10/100000;
    // if(isdigit('2')) cout << "yes";
    // else cout << "NO";
    
            
            

        // long long int q=pow(2, 61);
        // cout << q;

    //strrev(d);

    //printf("%s", d);
    // string e="";
    // for(char t: s){
    //         if(isalpha(t)){
    //             cout << t<< endl;
    //             e+=t;
    //         }
    //         else{
    //             cout << t;
    //             e="";
    //         }

    // } 
    // cout << "e:";
    // for(char t: e){
    //     cout << t;
    // }

        

    // cin>> n;
    // while(n--){
    //     int d;
    //     cin>> d;
    //     cout << fact(d)<< endl;
    // }
    


    return 0;
}


















// class prob{
//     public: 
//     void fun(){
//         int n, s;
//         cin >> n;
//         while(n--){
//             cin >> s;
//             int l=s%10;
//             string s1 = to_string(s);
//             int l1 = s1.length();
//             int f = s/pow(10, l1-1);
//             }
//     }
// };



// int main() {
//     vector<int> v{2,3,4,5};
//     vector<int> v1{6,5,4,3};
//     vector<int> v2(5);
//     deque<int> d1;
//     deque<int> d2;    
//     vector<int> s1{1,2,7,2,4,8};
//     map<char, int> m;
//     set<int> d(s1.begin(), s1.end());
    
//     prob rt;
//     rt.fun();
//     cout << d.size()<< endl; 
//     sort(v.begin(), v.end());
//     sort(v1.begin(), v1.end());
//     //merge(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
//     copy(d.begin(), d.end(), v2.begin());
//     for(auto &t: v2){
//         cout << t;
//     }



    

//    // cout << all_of(s.begin(), s.end(), [](string r){return r.at(0)>'r';});
    
    
    

//     // reverse(v.begin(), v.end());
//     // reverse(v1.begin(), v1.end());
//     // int c=0; 
//     // v.insert(v.begin(), 20);
//     // for(int i=0, j=0; i<v.size() && j<v1.size(); i++, j++){
//     //     cout << v1.at(i)<< " " << v.at(j) << endl;
//     // }
//     // for(auto &t: s1){
//     //     d1.push_back(t);
//     //     d2.push_front(t);
//     // }

//     // while(d1.size() != 0){
//     //     cout << d1.front();
//     //     d1.pop_front();
//     // }

//     // while(d2.size() != 0){
//     //     cout << d2.front();
//     //     d2.pop_front();
//     // }
//     // cout <<"eq="<<(d1==d2);
//     // v2=v;
//     // for(auto &t: v2){
//     //     cout << t;
//     // }

//     return 0;
// }