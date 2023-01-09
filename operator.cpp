// assignment operator =
// arithmetic operator + - * / %
// compound assignment += -= *= /= %= >>= <<= &= ^= |=
// increment and decrement ++ --
// relational and comparison operators == != > < >= <=
// logical operators ! && ||
// conditional ternary operators ?
// comma operator
// bitwise operator & | ^ ~ << >>

#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = ++a;
    int m = 3;
    int n = m++;
    int x, y;

    cout << a << " " << b << endl;
    cout << m << " " << n << endl;

    // conditional ternary operators 
    // syntax = condition ? result 1 : result 2

    5 > 3 ? cout << "True" << endl : cout << "False" << endl;

    x = (y = 3, y + 2);
    cout << x << endl;

    // Explicit type casting operator
    int i;
    float f = 3.14;
    i = (int) f;
    cout << i;

    return 0;
}