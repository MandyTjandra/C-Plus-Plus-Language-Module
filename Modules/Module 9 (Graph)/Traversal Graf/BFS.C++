#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Usually use for finding the shortest path in unweighted graphs.

// Fungsi Breadth-First Search (BFS) untuk menelusuri graf
// Parameters:
// - result: Vector untuk menyimpan urutan kunjungan
// - start: Node awal untuk memulai BFS
// - vertex: Jumlah total vertex di graf
// - adjList: Adjacency list untuk merepresentasikan graf
void bfs(vector<long> &result, long start, long vertex, const vector<vector<pair<long, long>>> &adjList) {
    // Array untuk melacak node yang telah dikunjungi
    vector<bool> visited(vertex, false);
    // Queue untuk menyimpan node yang akan dieksplorasi
    queue<long> q;

    // Memulai dari node start
    q.push(start);             // Masukkan node awal ke queue
    visited[start] = true;     // Tandai node awal sebagai sudah dikunjungi
    result.push_back(start);   // Tambahkan node awal ke hasil

    // Iterasi selama queue tidak kosong
    while (!q.empty()) {
        long temp = q.front(); // Ambil node terdepan dari queue
        q.pop();               // Hapus node tersebut dari queue

        // Periksa semua tetangga dari node saat ini
        for (auto it : adjList[temp]) {
            // Jika tetangga belum dikunjungi, tambahkan ke queue
            if (!visited[it.first]) {
                q.push(it.first);            // Masukkan tetangga ke queue
                visited[it.first] = true;    // Tandai tetangga sebagai sudah dikunjungi
                result.push_back(it.first);  // Tambahkan tetangga ke hasil
            }
        }
    }
}

int main() {
    long vertex = 5; // Contoh jumlah vertex
    vector<vector<pair<long, long>>> adjList(vertex);

    // Menambahkan edge ke adjacency list
    adjList[0].push_back({1, 0});
    adjList[0].push_back({2, 0});
    adjList[1].push_back({3, 0});
    adjList[2].push_back({4, 0});

    vector<long> result;
    long startNode = 0;

    // Memanggil fungsi BFS
    bfs(result, startNode, vertex, adjList);

    // Menampilkan hasil
    cout << "BFS Traversal: ";
    for (auto node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
