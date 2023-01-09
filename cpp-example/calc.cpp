#include <iostream>
#include <string>
using namespace std;

int main() {
    string operasi, keluar;
    int a, b;

    while(true) {
        cout << "Masukkan angka pertama: ";
        cin >> a;
        cout << "Masukkan operator: ";
        cin >> operasi;
        cout << "Masukkan angka kedua: ";
        cin >> b;

        if(operasi == "+") {
            cout << a + b << endl;
        } else if(operasi == "-") {
            cout << a - b << endl;
        } else if(operasi == "*") {
            cout << a * b << endl;
        } else if(operasi == "/") {
            cout << a / b << endl;
        }

        cout << "Keluar? ";
        cin >> keluar;

        if(keluar == "Y" | keluar == "y") {
            return false;
        }
    }

    return 0;
}