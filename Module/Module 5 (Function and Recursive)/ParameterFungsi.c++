#include <iostream>
using namespace std;

void cetak(string str) {
    cout << str << "\n";
}

void jumlah(int a, int b) {
    int hasil = a + b;
    cout << hasil << "\n";
}

int main() {
    cetak("Halo, dunia!");  // Print a message
    jumlah(2, 5);           // Calculate and print the sum of 2 and 5
    return 0;
}
