#include <iostream>
using namespace std;

int persegi(int panjang, int lebar) {
    int luas = panjang * lebar;
    return luas;
}

// overloading
int persegi(int sisi) {
    return sisi * sisi;
}

double persegi(double sisi) {
    return sisi * sisi;
}

int main() {
    cout << "Luas persegi: " << persegi(2, 4) << endl;
    cout << "Luas persegi: " << persegi(2) << endl;
    cout << "Luas persegi: " << persegi(2.5) << endl;
    
    return 0;
}