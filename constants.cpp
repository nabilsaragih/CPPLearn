#include <iostream>
using namespace std;

const double pi = 3.1415926; // instead like this
const char tab = '\t';

int main() {
    // Escape characters
    cout << "Newline\n";
    cout << "Carriage\rReturn" << endl;
    cout << "Newline\tTab" << endl;
    cout << "Vertical\vTab" << endl;
    cout << "Back\bSpace" << endl;
    cout << "Form\fFeed" << endl;
    cout << "Alert\fLine" << endl;
    cout << "Single\'Quote" << endl;
    cout << "Double\"Quote" << endl;
    cout << "Question\?Mark" << endl;
    cout << "Back\\lash" << endl;


    // We can define it to
    #define PI 3.14159
    #define NEWLINE '\n'

    double r = 5.0;
    double circle = 2 * PI * r;

    cout << circle << NEWLINE;
    return 0;
}