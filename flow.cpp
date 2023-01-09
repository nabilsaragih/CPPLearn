// selection statements: if and else
#include <iostream>
#include <string>
using namespace std;

int main() {
    // for loops with decision
    for (int n = 1; n <= 5; n++) {
        if (n == 3) {
            cout << "three" << endl;
        } else if (n == 4) {
            cout << "four" << endl;
        } else {
            cout << n << endl;
        }
    }

    // countdown using while loops
    int i = 10;
    while (i > 0) {
        cout << i << ", ";
        --i;
    }
    cout <<"liftoff!\n";

    // echo machine
    string str;
    do {
        cout << "Enter text: ";
        getline (cin, str);
        cout << "You entered: " << str << endl;
    } while (str != "goodbye");

    // range-based for loop
    string mystr {"Hello!"};
    for (char c : mystr) {
        cout << "[" << c << "]";
    }
    cout << endl;

    // jump statements
    

    return 0;
}