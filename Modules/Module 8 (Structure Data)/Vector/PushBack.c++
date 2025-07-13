#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Membuat vector kosong
    vector<int> vec;  // []

    // Menambahkan elemen ke dalam vector
    vec.push_back(1); // [1]
    vec.push_back(2); // [1, 2]

    // Menampilkan isi vector
    cout << "Isi vector: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
