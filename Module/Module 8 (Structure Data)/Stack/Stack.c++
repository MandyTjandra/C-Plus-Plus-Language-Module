#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Membuat stack bertipe int
    stack<int> s;

    // Menambahkan elemen ke stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Menampilkan dan menghapus elemen dari stack
    while (!s.empty()) {
        cout << "Elemen puncak: " << s.top() << endl; // Menampilkan elemen puncak
        s.pop(); // Menghapus elemen puncak
    }

    return 0;
}

/* Dalam stack perlu diingat konsep yang disebut dengan LIFO atau Last In First Out */