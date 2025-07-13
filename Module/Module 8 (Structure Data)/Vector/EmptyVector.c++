#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Membuat vector kosong
    vector<int> vec;

    // Menampilkan hasil dari vec.empty()
    cout << vec.empty();

    /*Fungsi empty() digunakan untuk memeriksa apakah vector kosong (size = 0) atau tidak. 
    Jika vector kosong maka fungsi akan mengembalikan nilai 
    true dan false untuk kondisi sebaliknya.*/

    return 0;
}
