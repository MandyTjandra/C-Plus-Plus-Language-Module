#include <iostream>
using namespace std;

int main() {
    int adj_matrix[4][4];

    // Isi semua dengan 0
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 4; ++j) {
            adj_matrix[i][j] = 0;
        }
    }

    // A - B
    adj_matrix[0][1] = 1; // A -> B
    adj_matrix[1][0] = 1; // B -> A

    // A - C
    adj_matrix[0][2] = 1; // A -> C
    adj_matrix[2][0] = 1; // C -> A

    // B - C
    adj_matrix[1][2] = 1; // B -> C
    adj_matrix[2][1] = 1; // C -> B

    // C - D
    adj_matrix[2][3] = 1; // C -> D
    adj_matrix[3][2] = 1; // D -> C

    // Cetak matriks ketetanggaan
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (adj_matrix[i][j] == 0)
                cout << 0 << "\t"; // Tampilkan "INF" untuk nilai infinity
            else
                cout << adj_matrix[i][j] << "\t"; // Tampilkan bobot sisi
        }
        cout << endl; // Pindah baris untuk baris berikutnya
    }
}