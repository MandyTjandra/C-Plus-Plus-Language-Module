#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Membuat vector dengan elemen {1, 2}
    vector<int> vec = {1, 2}; // [1, 2]

    cout << "Jumlah Elemen mula-mula: " << vec.size() << endl;

    // Menghapus semua elemen dari vector
    vec.clear();  // [ ] Vector sekarang kosong

    // Menampilkan jumlah elemen setelah clear
    cout << "Jumlah Elemen setelah clear: " << vec.size() << endl;

    return 0;
}
