#include <iostream>
using namespace std;

int main() {
    // standard output (cout)
    cout << "Output sentence.\n";

    // multiple insertion operations
    cout << "This " << " is a " << "single C++ statement" << endl;
    // its useful to mix literals and variable in a single statement
    // pretty similar to string formatting in python language

    cout << "First sentence.\n";
    cout << "Second sentence." << endl;
    cout << "Third sentence.\nFourth sentence.\n";

    // standard input (cin)
    int age;
    cin >> age;

    // i/o example
    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you entered is " << i;
    cout << " and its double is " << i * 2 << ".\n";

    // cin shorthand 
    // cin >> a >> b;
    // equal to
    // cin >> a;
    // cin >> b;

    return 0;
}