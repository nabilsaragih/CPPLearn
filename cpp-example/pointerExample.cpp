#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *aPtr = &a;

    cout << a << endl;
    cout << *aPtr << endl;
    cout << &a << endl;
    cout << aPtr << endl;

    return 0;
}