#include <bits/stdc++.h>
using namespace std;

// Fungsi untuk menghitung FPB menggunakan algoritma Euclidean
int FPB(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Fungsi untuk menghitung KPK menggunakan FPB
int KPK(int a, int b) {
    return (a * b) / FPB(a, b);
}

int main() {
    int a, b;

    cout << "Masukkan 2 angka yang ingin dicari KPK-nya: ";
    cin >> a >> b;

    int hasil = KPK(a, b);
    cout << "KPK dari " << a << " dan " << b << " adalah: " << hasil << endl;

    return 0;
}
