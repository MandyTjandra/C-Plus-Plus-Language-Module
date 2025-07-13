#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    bool isPrime = true; // Assume the number is prime initially

    cout << "Masukkan angka yang ingin diperiksa: " << endl;
    cin >> x;

    if (x <= 1) {
        cout << "Bukan bilangan prima." << endl;
    } else {
        for (int i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << "Bilangan prima." << endl;
        } else {
            cout << "Bukan bilangan prima." << endl;
        }
    }

    return 0;
}
