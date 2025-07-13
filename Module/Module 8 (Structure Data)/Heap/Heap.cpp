#include <queue>
#include <iostream>
using namespace std;

int main() {
    priority_queue<int> nama_pq; //'priority_queue<tipe_data> nama_pq;'

    // Push elements into the priority queue
    nama_pq.push(10);
    nama_pq.push(20);
    nama_pq.push(15);
    nama_pq.push(30);

    // Print and pop elements in descending order (priority queue sorts in descending order by default)
    cout << "Priority Queue elements (sorted):" << endl;
    while (!nama_pq.empty()) {
        cout << nama_pq.top() << " "; // Print the top element
        nama_pq.pop(); // Remove the top element
    }

    return 0;
}
/*Heap adalah struktur data berbentuk pohon biner yang memenuhi sifat heap, dimana
elemen pada setiap nodenya memiliki nilai yang lebih besar atau lebih kecil daripada 
elemen-elemen node pada anak-anaknya, tergantung pada jenis heap yang digunakan. 
Heap digunakan secara umum dalam implementasi priority queue.

Priority queue adalah struktur data yang mirip dengan queue biasa, namun dengan satu 
perbedaan utama: setiap elemen dalam priority queue memiliki prioritas yang menentukan 
urutan elemen tersebut saat dikeluarkan dari queue.*/