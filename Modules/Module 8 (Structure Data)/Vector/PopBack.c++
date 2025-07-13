#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Membuat vector dengan elemen {1, 2}
    vector<int> vec = {1, 2}; // [1, 2]

    // Menghapus elemen terakhir dari vector
    vec.pop_back(); // [1]

    // Menampilkan isi vector setelah pop_back
    cout << "Isi vector setelah pop_back: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}