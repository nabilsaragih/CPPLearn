#include <iostream>
using namespace std;

int main() {
    #define PI 3.14
    int r;

    cout << "Enter circle radius: ";
    cin >> r;

    float areaOfCircle = PI * (r * r);
    cout << areaOfCircle;

    return 0;
}

