#include <iostream>
using namespace std;

int main() {
    int a = 5;
    
    cout << "nilai dari a: " << a << endl;
    cout << "address dari a: " << &a << endl;

    int &b = a;

    cout << "nilai dari b: " << b << endl;
    cout << "address dari b: " << &b << endl;

    b = 10;
    cout << "nilai dari a: " << a << endl;
    cout << "nilai dari b: " << b << endl;

    return 0;
}