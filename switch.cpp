#include <iostream>

using namespace std;

int main() {
    int a, k, b, n;
    do{
        cout << "\n 1.Sum\n 2.Sub\n 3.Mul\n 4.Div\n";
        cout << "enter choice, a, b\n";

        cin >> k >> a >> b;
    
        switch(k) {
            case 1: cout << "add: " << a+b << endl;
            break;

            case 2: cout << "sub: " << a-b << endl;
            break;

            case 3: cout << "Mul: " << a*b << endl;
            break;

            case 4: cout << "Div: " << a/b << endl;
            break;


        };
        cout << "want to continue\n if \"yes\" \n Enter 1 \n else enter 0";
        cin >> n;
    }while(n);

    return 0;
}