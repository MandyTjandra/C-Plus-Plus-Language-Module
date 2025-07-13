#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;    // Stack kosong pada awalnya: []
    s.push(1);       // Menambahkan elemen 1 ke dalam stack: [1]
    s.push(2);       // Menambahkan elemen 2 ke dalam stack: [1, 2]
    s.push(3);       // Menambahkan elemen 3 ke dalam stack: [1, 2, 3]

    // Menampilkan isi stack setelah operasi push
    cout << "Elemen di stack setelah push: ";
    while (!s.empty()) {
        cout << s.top() << " ";  // Menampilkan elemen di puncak stack
        s.pop();  // Menghapus elemen dari puncak stack
    }
    cout << endl;

    return 0;
}
