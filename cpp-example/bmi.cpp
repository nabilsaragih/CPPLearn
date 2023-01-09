#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float height, weight, bmi, heightInMeters, heightPower;
    string heightStr, weightStr;

    cout << "Masukkan berat badan anda: ";
    getline(cin, weightStr);
    stringstream(weightStr) >> weight;
    cout << "Masukkan tinggi badan anda: ";
    getline(cin, heightStr);
    stringstream(heightStr) >> height;

    bmi = weight / pow(height/100, 2);

    cout << fixed << setprecision(1) << bmi << endl;

    if (bmi < 18.4) {
        cout << "Anda kurus";
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Anda normal";
    } else if (bmi >= 25) {
        cout << "Anda obesitas";
    }

    return 0;
}