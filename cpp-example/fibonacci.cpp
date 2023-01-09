#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 1;
    int c = 0;

    for(int i = 0; i < 20; i++) {
        cout << a << " ";
        c = a;
        a = b;
        b = c + a;
    }

    return 0;
}