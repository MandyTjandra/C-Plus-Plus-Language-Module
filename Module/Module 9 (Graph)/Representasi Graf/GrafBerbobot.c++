#include <iostream>
using namespace std;
const int INF = 100000000;

int main() {
    int adj_matrix[4][4];

    // Isi semua dengan INF
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            adj_matrix[i][j] = INF;
        }
    }

    adj_matrix[0][1] = 3; // A -> B
    adj_matrix[0][2] = 2; // A -> C

    adj_matrix[1][2] = 5; // B -> C

    adj_matrix[2][3] = 7; // C -> D

    // Cetak matriks ketetanggaan
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (adj_matrix[i][j] == INF)
                cout << "INF" << "\t"; // Tampilkan "INF" untuk nilai infinity
            else
                cout << adj_matrix[i][j] << "\t"; // Tampilkan bobot sisi
        }
        cout << endl; // Pindah baris untuk baris berikutnya
    }
}