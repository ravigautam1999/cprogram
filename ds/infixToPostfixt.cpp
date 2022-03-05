#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<char> OperatorStack;
    stack<char> PostfixExpr;
    map<char, int> precidencyOrder;
    precidencyOrder['+'] = 0;
    precidencyOrder['-'] = 1;
    precidencyOrder['%'] = 2;
    precidencyOrder['*'] = 3;
    precidencyOrder['/'] = 4;
    
    string inputV;
    cout << "Input String: ";
    cin >> inputV;


    return 0;
}