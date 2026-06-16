#include <iostream>
using namespace std;
#include <cmath>

int main (){
    cout <<"Enter two numbers: ";
    double a, b;
    cin >> a >> b;
    cout << "Enter operation (+, -, *, /): ";
    char op;
    cin >> op;
    if (op == '+'){
        cout << a + b << endl;
    }
    else if (op == '-'){
        cout << a-b << endl;
    }
    else if (op == '*'){
        cout << a*b<< endl;
    }
    else if (op =='/'){
        cout << a/b << endl;
    }
    else {
        cout << "invalid operation" << endl;
    }
}