#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <cfenv>
#include <cstdlib>
#include <cstring>

using namespace std;

class task1 {
    public: void GotoF(int n=1){
        
        line: 
            cout<< "under line:" << n <<endl;
            n+=1;

        if (n<10) {
            goto line;
            GotoF();
        }
    }
    public: void Arrays() {
        string str="hello tttttttttt    ttt t";
        int s=0, c=0;
        int a[] = {1,2,3,4,5};
        // for (const float &n : a){
        //     cout << n << " ";
        //     s+=n;
        //     c++;
        // }
        

        for (auto &n : a){
            cout << n << " ";
            s+=n;
            c++;
           
        }
        for (auto &d : str){
            cout << d << " ";
        }
        cout << "sum: "<< s;
        cout << "count: " << c;
    }
    public: void cmathF() {
        cout << ":" <<round(sqrt(17))<< endl;
        cout << ":" <<ceil(3.4)<< endl;
        cout << ":" <<floor(3.4)<< endl;
        cout << ":" <<pow(2,3)<< endl;
        cout << "round to nearest:" <<llrint(11.87)<< endl;
        cout << "round to nearest:" <<llrint(11.21)<< endl;
        fesetround(FE_DOWNWARD);
        cout << "rounding downward:" <<llrint(11.87)<< endl;
        cout << "rounding downward:" <<llrint(11.21)<< endl;
        fesetround(FE_UPWARD);
        cout << "rounding upward:" <<llrint(11.87)<< endl;
        cout << "rounding upward:" <<llrint(11.21)<< endl;
        cout << "remainder: " << remainder(4,6)<< endl;
        cout << "remainder: " << remainder(12.4,5.1)<< endl;
        cout << "remainder: " << remainder(24,4.1)<< endl;
        cout << "remainder: " << remainder(34,6)<< endl;
        cout << "(x*y+z): " << fma(2.1, 3, 6)<< endl;
        cout << "min: " << min(2,3)<< endl;
        cout << "exp: " << exp(10) << endl; //power of e
        cout << "exp2: " << exp2(10) << endl; // power of 2

        double x=12.34, fractionPart, IntigerPart;
        fractionPart = modf(x, &IntigerPart);
        cout << "FractionPart: " << fractionPart << endl;
        cout << "IntigerPart: " << IntigerPart << endl;






    }
    public: void cstdlibF() {
        
        string numberString[3] = {"12.44b 0xy", "-44.01e-3End String", "0xf1bc.51hello"};
        char *end;
        double number;
        
        for (auto n: numberString){
            char c[n.size()];
            strcpy(c,"23456");
            cout <<c<<endl;

            number = strtod("12.44b 0xy",&end);
            cout << "Number in String = " << "12.44b 0xy" << endl;
            cout << "Number in Double = " << number << endl;
            cout << "End String = " << end << endl;
            
        } 

        
    }
    public:
           void cstringF() {
                char ptr[] = "This is the random string";
                char ch = 'r';
                int count = 15; 
                if (memchr(ptr, ch, count))cout << "member charector = " <<  "yes"<< endl;
                    }   
            void Part1() {
                //convert string to char[]
                string s= "this is string";
                int n= s.length();
                char char_array[n+1];
                strcpy(char_array, s.c_str());
                for(auto t: char_array){
                    cout << t;
                }
            }
            void part2() {
                char s[] ="this, is, on, split";
                char d[] = ",";
                char *token = strtok(s,d);
                while (token) {
                    cout << token << endl;
                    token = strtok(NULL, d);
                }
            }  
    
};

class task2 {
    public: void add_two_bin(unsigned long long int a,unsigned long long int b, int c=0){
      int f=0;
      int l1=to_string(a).length();
      int l2=to_string(b).length();
      cout <<"sum:"<<endl;
      if(l1>l2){
          cout <<"   "<<a << endl;
          for (int i=0; i< (l1-l2); i++){cout << " ";}
          cout <<"+  "<<b<<endl;
      }
      else if(l1<l2){
          for (int i=0; i< (l2-l1 ); i++){cout << " ";}
          cout <<"   "<<a << endl;
          cout <<"+  "<<b << endl;
      }
      else{
          cout <<"    "<<a << endl;
          cout <<"+   "<<b << endl;
      }
      cout << "  ";
      for(int i=0; i<=max(l1, l2)+1;i++){cout << "-";}
      cout << endl;

     
      
      string s="";

      while(a !=0 || b != 0){
          int h1 = a%10;
          a/=10;
          int h2 = b%10;
          b/=10;
          s=to_string((h1+h2+c)%2)+s;
          c=(h1+h2+c)/2;

      }
      if (c == 1 && (a==0 && b==0)){s="1"+s;}
      while(a != 0){
          int h1 = a%10;
          a/=10;
          s=to_string((h1+c)%2) + s;
          c=(h1+c)/2;

      }
      while(b != 0){
          int h1 = a%10;
          b/=10;
          s=to_string((h1+c)%2) + s;
          c=(h1+c)/2;

      }
      
     cout <<"   "<<s;  
        
    }
};




int main() {
    task2 obj;
    obj.add_two_bin(1011110101010, 
                    1010101001000);  
    return 0;
}