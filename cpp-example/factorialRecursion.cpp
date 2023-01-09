#include <iostream>
using namespace std;

int factorialRecursion(int a) {
    if (a == 1) {
        return 1;
    } else {
        return a * factorialRecursion(a-1);
    }
}

int main() {
    cout << factorialRecursion(5) << endl;

    return 0;
}