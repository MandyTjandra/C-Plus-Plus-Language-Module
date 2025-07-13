#include <iostream>
#include <vector>
#include <limits>
using namespace std;

// Floyd-Warshall untuk mencari jarak terpendek antar semua pasangan node
void floyd_warshall(vector<vector<int>> &dist, int V) {
    const int INF = numeric_limits<int>::max(); // Representasi nilai tak hingga

    // Proses Floyd-Warshall
    for (int k = 0; k < V; ++k) {     // Perantara
        for (int i = 0; i < V; ++i) { // Sumber
            for (int j = 0; j < V; ++j) { // Tujuan
                // Jika jalur melalui k lebih pendek, perbarui jarak
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int main() {
    int V = 4; // Jumlah vertex
    const int INF = numeric_limits<int>::max(); // Representasi nilai tak hingga

    // Representasi adjacency matrix
    // INF menunjukkan tidak ada edge langsung
    vector<vector<int>> adj_matrix = {
        {0,    3,    INF, 5},
        {2,    0,    INF, 4},
        {INF,  1,    0,   INF},
        {INF,  INF,  2,   0}
    };

    vector<vector<int>> dist = adj_matrix; // Salin adjacency matrix sebagai awal matrix jarak

    // Jalankan algoritma Floyd-Warshall
    floyd_warshall(dist, V);

    // Tampilkan hasil
    cout << "Matrix jarak terpendek antar semua pasangan node:\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            if (dist[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
