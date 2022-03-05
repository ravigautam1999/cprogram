#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int program_for_prime() {

    int a, i=2;
    cin >> a;
    while(i <= sqrt(a)) {
        if (a % i == 0) {
            cout << "Not prime";
            return 0;
        }
        else{
           i+=1;
        }

    }
    cout << "prime";
    return 0;
}


int main() {
    int a,b;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

   
    

    return 0;
}