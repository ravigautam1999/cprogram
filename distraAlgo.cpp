#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void UnOrderedSet(){
    unordered_set<int> v1{2,3,4,1,4,3,2};
    unordered_set<int> v2{1,5,6,5,3,4,1,4,3,2};
    unordered_multiset<int> v3{1,5,6,5,3,4,1,4,3,2};
    multiset<int, greater<>> v4{1,5,6,5,3,4,1,4,3,2}; //ordered_multiset and not unique
    vector<int> s2{1,5,6,3,4, 7, 8, 2};
    list<int> s(10);

    iota(s.begin(),s.end(), -5);

    for(auto &t: s){
        cout << t <<" ";

    }
    cout << endl;

    nth_element(s2.begin()+2,s2.begin(), s2.end()-3);


    for(auto &i: s2){
        cout << i <<" " ;
    }
    cout << endl;


    cout <<"count 3: "<<v1.count(3)<< endl;
    cout << "bucket" << v1.bucket(4) << endl;
    cout << "bucket_count" << v1.bucket_count() << endl;
    cout << "bucket_size" << v1.bucket_size(2) << endl;



    
    for(auto &i: v1){
        cout << i <<" " ;
    }
    cout << endl;
    for(auto &i: v3){
        cout << i <<" " ;
    }

    cout << endl;
    for(auto &i: v4){
        cout << i <<" " ;
    }
}


class person{
    public:
        int age;
        string name;

    bool operator < (const person &rt) const { return age < rt.age; };
    bool operator > (const person &rt) const { return age > rt.age; };
};



void weightedGraph(){
    map<int, vector<pair<int, int>>, greater<>> mp;
    map<int, multiset<pair<int, int>>, less<>> mp1;
    
    vector<pair<int, int>>v1{{1,6}, {2, 8}, {3,9}};
    vector<pair<int, int>>v2{{2,4}, {3, 5}, {0,7}};
    vector<pair<int, int>>v3{{3,1}, {1, 3}, {0,10}};
    vector<pair<int, int>>v4{{1,3}, {2, 7}, {0,2}};

    multiset<pair<int, int>>v11{{1,6}, {2, 8}, {3,9}};
    multiset<pair<int, int>>v12{{2,4}, {3, 5}, {0,7}};
    multiset<pair<int, int>>v13{{3,1}, {1, 3}, {0,10}};
    multiset<pair<int, int>>v14{{1,3}, {2, 7}, {0,2}};
    
    vector<int> f;

    mp[0]=v1;
    mp[1]=v2;
    mp[2]=v3;
    mp[3]=v4;
    mp[4].push_back(make_pair(2,7));
    mp[4].push_back(make_pair(3,8));

    mp1[0]=v11;
    mp1[1]=v12;
    mp1[2]=v13;
    mp1[3]=v14;
    mp1[4].insert(make_pair(2,7));
    mp1[4].insert(make_pair(3,8));

    for(const auto &t: mp){
        cout <<"(Node, Weight) "<<t.first  << " ";
        for(const auto &y: t.second){
            cout<< "-> "<< " ( "<<y.first << ", " << y.second<< " ) ";
        }
        cout << endl;
        
    }

    cout << "\n\n"<< endl;

    for(const auto &t: mp1){
        cout <<"(Node, Weight) "<<t.first  << " ";
        for(const auto &y: t.second){
            cout<< "-> "<< " ( "<<y.first << ", " << y.second<< " ) ";
        }
        cout << endl;
        
    }


    



}
void vectorF(){
    vector<pair<int, int>> v{{1,4},{4,5}, {2,6}, {3,7}, {2,6}};
    map<int, vector<pair<int, int>>> mvp;
    
    mvp[0]=v;

    vector<int> g{1,4,2,3,5,7};
    multiset<int, greater<int>> g1{1,4,2,3,5,7,2};
    multiset<person, greater<person>> b{{12, "tou"}, {22, "hou"}, {34, "edr"}};
    //multiset<person, greater<person1>> c{{12, "tou"}, {22, "hou"}, {34, "edr"}};



      
    sort(g.rbegin(), g.rend());
    cout << endl;

    for(auto &t: g){
        cout<< t << " ";
    }
    cout << endl;
     for(auto &t: g1){
        cout<< t << " ";
    }
    cout << endl;

    cout << endl;
     for(auto &t: b){
        cout<< t.age << " " << t.name << endl;
    }
    cout << endl;

    

    // for(int i=0;i< 5; i++){
        
    //     //cout<< v[i].first <<"\t" << v[i].second<< endl;
    // }
    // for(auto &t: v){
    //     cout<< t.first <<"\t" << t.second<< endl;
    // }
}


int main() {
    map<int, int> mp;
    map<int, vector<int>> mpv;
    map<int, pair<int, int>>mpp;
    map<int, set<int>> mps;
   
   
    

    vector<int>v1{1,2,3,4};
    vector<int>v2{5,6,7};
    vector<int>v3{0,9,8,7};

    mpv[0]=v1;
    mpv[1]=v2;
    mpv[2]=v3;
    mpp[0]=make_pair(1,3);
    mpp[1]=make_pair(1,4);
    mpp[2]=make_pair(1,5);
    mpp[3]=make_pair(1,6);

   
    for(int i=0; i < 3; i++){
        for(auto &t: mpv[i]){
            cout << t << " ";
        }
        cout << endl;
    }

    for(int i=0; i < 4; i++){
        
            cout <<i<<": "<<mpp[i].first << " "<< mpp[i].second << endl;
        
        
    }




    mp.insert(pair<int, int>(0,20));
    mp.insert(pair<int, int>(0,60));
    mp.insert(pair<int, int>(1,30));
    mp.insert(pair<int, int>(2,50));
    mp.insert(pair<int, int>(4,60));
    mp.insert(make_pair(4,30));

    for(auto &t: mp){
        cout << t.first<<"\t" << t.second << endl;
    }

    //vectorF();

    //weightedGraph();
    UnOrderedSet();
    return 0;
}
