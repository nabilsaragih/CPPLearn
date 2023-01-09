#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int v = 1; v <= n; v++) {
        fact = fact * v;
    }
    return fact;
}

int main() {
    cout << factorial(5);
}