#include <iostream>
using namespace std;

void fungsi(int *b) {
    cout << "nilai dari b: " << *b << endl;
    cout << "address dari b: " << b << endl;
}

void kuadrat(int *valPtr) {
    *valPtr = (*valPtr) * (*valPtr);
}

int main() {
    int a = 5;

    cout << "nilai dari a: " << a << endl;
    cout << "address dari a: " << &a << endl;
    fungsi(&a);
    kuadrat(&a);
    cout << "nilai dari a: " << a << endl;  

    return 0;
}