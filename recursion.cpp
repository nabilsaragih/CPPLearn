#include <iostream>
using namespace std;

int powerRecursion(int a, int b) {
    if(b == 0) {
        return 1;
    } else {
        return a * powerRecursion(a, (b-1));
    }
}

int main() {
    cout << powerRecursion(5, 5);

    return 0;
}