#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class VectorClass {
    public: void VectorF1(){
       vector <int> v1{1,4,2,3,4,7,6,5};
       vector <char> v2{'w','r', 't', 'a', 'y'};
       vector <string> v3{"ertt","jie", "fghui", "edrtgh", "frtkgi"};

       sort(v1.begin(), v1.end());
       for (auto &t: v1){
           cout << t << endl;
       }
       sort(v2.begin(), v2.end());
       for (auto &t: v2){
           cout << t << endl;
       }
       sort(v3.begin(), v3.end());
       for (auto &t: v3){
           cout << t << endl;
       }
    }

    public: void VectorF2() {
        vector<string> v1;
        v1.push_back("hello");
        v1.push_back("Ji");
        for (auto &t: v1){
            cout << t << endl;
        }

        vector<int> v2{1,2,3,4,5};
        vector<int> v3{4,9,8,1,5};
        v2.swap(v3);
        for (auto &t:v2){
            cout << t << " ";
        }

    }
    public: void VectorF3() {
        vector<int> v1={1,2,6,3,4,5};
        vector<int> v;
        for (int i=0; i<v1.size();i++) cout << v1.at(i) << " ";
        cout <<"It determines the maximum size that vector can hold: "<<v1.max_size()<<endl;
        cout << v1.front() <<endl;
        v.assign(v1.begin() +1, v1.end()-1);//assigning a part of vector v1
        for(auto &t: v){
            cout << t << " ";
        }
        cout << endl;
        vector<int> :: const_iterator citr;
        citr=v1.cbegin() +1;
        cout << *citr << endl;

        cout <<"current capacity of the vector: "<<v1.capacity();
        
    }
    
};

class DequeClass {

    public: void DequePart1() {
        deque <int> d1;
        d1.push_front(1);
        d1.push_front(2);
        d1.push_back(3);
        d1.push_back(4);
        
        for(auto &t: d1){
            cout << t <<endl;
        }
     
    }
    public: void DequePart2() {
        deque<string> d1 = {"hello", "chanda", "not", "suno", "chanda"};
        sort(d1.begin()+1, d1.end()-1);
        
        for (auto &t: d1){
            cout << t << " ";
        }
    }
};

class ListClass {
    public: bool comparison(int first, int second)  
        {  
            bool a;  
            a=first<second;  
            return (a);  
        }  
    public: void List1(){
        list<int>l1{1,2,3,4,5,8,8};
        list<int>l2{2,9,4,8,1,0};
        list<int>l3{11,3,12,4,15};
        vector<int>l6{1,4,2,7,8};
        vector<int>l7{1,4,9,1,7};
        //cout << l1.front();
        l2.reverse();
        for(auto &t: l2){
            cout << t << " ";
        }
        l1.unique();
        l1.insert(l2.begin(),3);
        for(auto &t: l1){
            cout << t << " ";
        }

        l1.swap(l2);
        for(list<int>::iterator itr=l1.begin(); itr != l1.end();++itr){
            cout << *itr << " ";
        }
        l1.merge(l3);
        for(auto &t: l1){
            cout << t << " ";
        }
    
        //l2.merge(l3, comparison);

        for (auto &t: l2){
            cout << t;
        }
        
    }
    public: void List2(){
        list<int>l1{1,2,3,4,5,8,8};
        list<int>l2{2,9,4,8,1,0};
        list<int>l3{11,3,12,4,15};
        
        l1.splice(--l1.end(), l2);
        for (auto &t: l1){
            cout << t << " ";
        }
    }

};

class SetClass {
    public: void SetF() {
        set<char> s1{'q', 'f', 'd', 'k', 'k'};
        set<int> s2{1,6,2,7,8};
        for(auto t=s1.cbegin(); t!= s1.cend(); t++){
            cout << *t << " ";
        }
        for(auto t=s1.rbegin(); t!= s1.rend(); t++){
            cout << *t << " ";
        }
        s2.insert( 4);
        for (auto &t: s2){
            cout << t << " ";
        }
    }
};

class StackClass {
    private: void printF(stack<int> ss) {
        while(!ss.empty()){
            cout << ss.top()<< " ";
            ss.pop();

        }
    }
    public: void StackF () {
        stack<int> s1;
        s1.push(4);
        s1.push(2);
        s1.push(5);
        s1.push(6);
        s1.push(7);
        printF(s1);
        
    }
};

class PriorityQClass {
    public: void PriorityQF(){
        priority_queue <int> p1;
        p1.push(11);
        p1.push(31);
        p1.push(2);
        p1.push(8);
        p1.push(9);
        p1.push(1);
       
        while(!p1.empty()){
            cout << p1.top() << " ";
            p1.pop();

        }
    
    }
};

class Map_As_Dict {
    public: void Dict1() {
        map <int, string> m1= {{1,"hekol"}, {3, "koi"}, {5,"ui"}};
        
        for(auto &t: m1){
            cout << t.first << ":" << t.second<< endl;
        }
        auto it= m1.find(4);
        if(it == m1.end()) cout << "element not found";
        else cout <<"element Found: "<<  it->first << " " << it-> second << endl;

        m1.insert(pair<int, string> (4, "oi"));
        m1.emplace_hint(m1.begin(), 7, "df");
        m1.emplace_hint(m1.end(), 9, "df");
       // m1.emplace(10, 'hd'); //insert at begining

        for(auto &t: m1){
            cout << t.first << ":" << t.second<< endl;
        }

    }
};

class CPP_AlgoClass {
    private: void MUL2(int x){
        cout << x*2 << " ";
    }
    public: void all_of_Function(){
        array<int, 6> arr ={2,4,1,5,6,7};
        int a[5] ={1,2,3,4,5};

        if(all_of(arr.begin(), arr.end(), [](int x){return x%2 == 0;})) cout << "all are even"<< endl;
        else cout << "odd" << endl;
        if(any_of(arr.begin(), arr.end(), [](int x){return x%2 == 0;})) cout << "atleast on is even"<< endl;
        else cout << "odd" << endl;

        cout << "no. of odd element in array " << " ( "  ;
        for(auto &t: arr){cout << t<< " ";} 

        cout  <<" ) is: ";
        cout << count_if(arr.begin(), arr.end(), [](int x){return x%2;}) << endl;

        //for_each(a, a+5, MUL2);
        cout << "max: " <<max({1,6,3,4}, [](int a, int b){return a<b;})<<endl;
        cout << "max: " <<max(1,3) << endl;
        cout << "max: " <<*max_element(arr.begin(),arr.end())<< endl;
        cout << "max: " <<max({1,6,3,4}, [](int a, int b){return a>b;})<<endl;
        fill(arr.begin(), arr.end(), 4);
        for_each(arr.begin(), arr.end(), [](int z){cout << z<< " ";});

    }
    public: void transformF() {
        vector<int> v1{1,2,3,4,5};
        vector<char>c1{'a', 'b', 'c', 'd', 'e'};
        vector<string> result1;
        vector<string> result2;
        transform(v1.begin(), v1.end(), back_inserter(result1), [](int x) {return  to_string(x*2);});
        for_each(result1.begin(), result1.end(), [](auto x){cout << x << " ";});
        transform(c1.begin(), c1.end(), v1.begin(), back_inserter(result2),[](char a, int b){return string(a,b);});
        for_each(result2.begin(), result2.end(), [](auto x){cout << x << " ";});


    }

};


int main() {
   
    CPP_AlgoClass obj;
    obj.transformF();
    

    
    return 0;
}