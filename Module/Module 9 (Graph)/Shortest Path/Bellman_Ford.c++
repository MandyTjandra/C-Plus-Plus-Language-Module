#include <iostream>
#include <vector>
#include <limits>
using namespace std;

// Fungsi Bellman-Ford untuk mencari jarak terpendek
void bellman_ford(vector<int> &dist, int source, int V, int E, const vector<pair<pair<int, int>, int>> &edge_list) {
    const int INF = numeric_limits<int>::max(); // Representasi nilai tak hingga
    fill(dist.begin(), dist.end(), INF);       // Inisialisasi jarak ke semua node sebagai tak hingga
    dist[source] = 0;                          // Jarak dari sumber ke dirinya sendiri adalah 0

    // Relaxasi semua edge sebanyak V-1 kali
    for (int i = 1; i < V; ++i) {
        bool updated = false; // Flag untuk memeriksa perubahan

        for (int j = 0; j < E; ++j) {
            int u = edge_list[j].first.first;  // Node asal
            int v = edge_list[j].first.second; // Node tujuan
            int weight = edge_list[j].second;  // Bobot edge

            // Jika jarak dapat diperbarui, perbarui
            if (dist[u] != INF && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                updated = true;
            }
        }

        // Jika tidak ada perubahan, keluar lebih awal
        if (!updated) break;
    }

    // Periksa adanya siklus negatif
    for (int j = 0; j < E; ++j) {
        int u = edge_list[j].first.first;
        int v = edge_list[j].first.second;
        int weight = edge_list[j].second;

        // Jika ditemukan siklus negatif, laporkan dan keluar
        if (dist[u] != INF && dist[u] + weight < dist[v]) {
            cout << "Graf mengandung siklus negatif!" << endl;
            return;
        }
    }
}

int main() {
    int V = 5; // Jumlah vertex
    int E = 8; // Jumlah edge

    // Representasi graf menggunakan edge list ((u, v), weight)
    vector<pair<pair<int, int>, int>> edge_list = {
        {{0, 1}, -1}, {{0, 2}, 4}, {{1, 2}, 3},
        {{1, 3}, 2},  {{1, 4}, 2}, {{3, 2}, 5},
        {{3, 1}, 1},  {{4, 3}, -3}
    };

    vector<int> dist(V); // Menyimpan jarak dari sumber ke setiap node
    int source = 0;      // Node awal (sumber)

    // Jalankan algoritma Bellman-Ford
    bellman_ford(dist, source, V, E, edge_list);

    // Tampilkan jarak dari sumber ke setiap node
    cout << "Jarak dari node " << source << " ke semua node lainnya:\n";
    for (int i = 0; i < V; i++) {
        if (dist[i] == numeric_limits<int>::max()) {
            cout << "Node " << i << ": Tidak terjangkau\n";
        } else {
            cout << "Node " << i << ": " << dist[i] << endl;
        }
    }

    return 0;
}
