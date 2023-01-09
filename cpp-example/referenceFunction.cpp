#include <iostream>
using namespace std;

void fungsi(int &b) {
    b = 10;
    cout << "nilai b: " << b << endl;
    cout << "address b: " << &b << endl;
}

void kuadrat(int &value) {
    value = value * value;
}

int main() {
    int a = 5;

    cout << "nilai a: " << a << endl;
    cout << "address a: " << &a << endl;
    // fungsi(a);
    kuadrat(a);
    cout << "nilai a: " << a << endl;

    return 0;
}