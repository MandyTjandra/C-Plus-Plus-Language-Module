#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Fungsi Djikstra untuk menemukan jarak terpendek dari node sumber ke semua node lainnya
// Parameters:
// - dist: Vector untuk menyimpan jarak minimum ke setiap node
// - source: Node awal untuk memulai pencarian
// - V: Jumlah total vertex di graf
// - adj_list: Adjacency list untuk merepresentasikan graf
void djikstra(vector<int> &dist, int source, int V, const vector<vector<pair<int, int>>> &adj_list) {
    // Vector untuk melacak node yang telah dikunjungi
    vector<bool> visited(V, false);
    // Priority queue untuk memilih node dengan jarak terkecil (min-heap)
    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>> pq;

    // Inisialisasi semua jarak sebagai tak hingga (INF)
    const int INF = 1e9; // Nilai tak hingga
    fill(dist.begin(), dist.end(), INF);

    // Mulai dari node sumber
    pq.push(make_pair(0, source)); // Masukkan node sumber dengan jarak 0
    dist[source] = 0;             // Jarak ke sumber adalah 0

    // Iterasi selama priority queue tidak kosong
    while (!pq.empty()) {
        auto temp = pq.top(); // Ambil node dengan jarak terkecil
        pq.pop();             // Hapus node tersebut dari queue

        int current_dist = temp.first; // Jarak ke node saat ini
        int current_vertex = temp.second; // Node saat ini

        // Jika node sudah dikunjungi, lewati
        if (visited[current_vertex])
            continue;
        visited[current_vertex] = true; // Tandai node sebagai sudah dikunjungi

        // Periksa semua tetangga dari node saat ini
        for (auto neighbor : adj_list[current_vertex]) {
            int weight = neighbor.first;     // Bobot edge
            int next_vertex = neighbor.second; // Tetangga

            // Relaksasi: Update jarak jika ditemukan jarak lebih pendek
            if (current_dist + weight < dist[next_vertex]) {
                dist[next_vertex] = current_dist + weight; // Update jarak
                pq.push(make_pair(dist[next_vertex], next_vertex)); // Tambahkan ke priority queue
            }
        }
    }
}

int main() {
    int V = 5; // Jumlah vertex
    vector<vector<pair<int, int>>> adj_list(V);

    // Menambahkan edge: (bobot, tujuan)
    adj_list[0].push_back({10, 1});
    adj_list[0].push_back({3, 2});
    adj_list[1].push_back({1, 2});
    adj_list[1].push_back({2, 3});
    adj_list[2].push_back({8, 3});
    adj_list[3].push_back({4, 4});

    vector<int> dist(V);
    int source = 0;

    // Memanggil fungsi djikstra
    djikstra(dist, source, V, adj_list);

    // Menampilkan jarak terpendek
    cout << "Jarak terpendek dari node " << source << ":\n";
    for (int i = 0; i < V; i++) {
        cout << "Ke node " << i << ": " << dist[i] << endl;
    }

    return 0;
}
