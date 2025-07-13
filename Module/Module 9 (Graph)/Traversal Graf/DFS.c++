#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Usually use for tasks like cycle detection or solving problems based on backtracking

// Fungsi Depth-First Search (DFS) untuk menelusuri graf
// Parameters:
// - result: Vector untuk menyimpan urutan kunjungan
// - start: Node awal untuk memulai DFS
// - vertex: Jumlah total vertex di graf
// - adjList: Adjacency list untuk merepresentasikan graf
void dfs(vector<long> &result, long start, long vertex, const vector<vector<pair<long, long>>> &adjList) {
    // Array untuk melacak node yang telah dikunjungi
    vector<bool> visited(vertex, false);
    // Stack untuk menyimpan node yang akan dieksplorasi
    stack<long> st;

    // Memulai dari node start
    st.push(start);
    visited[start] = true; // Tandai node awal sebagai sudah dikunjungi
    result.push_back(start); // Tambahkan node awal ke hasil

    // Iterasi selama stack tidak kosong
    while (!st.empty()) {
        long temp = st.top(); // Ambil node teratas dari stack
        st.pop(); // Hapus node tersebut dari stack

        // Jika node belum dikunjungi, tandai dan masukkan ke hasil
        if (!visited[temp]) {
            result.push_back(temp);
            visited[temp] = true;
        }

        // Periksa semua tetangga dari node saat ini
        for (auto it : adjList[temp]) {
            // Jika tetangga belum dikunjungi, tambahkan ke stack
            if (!visited[it.first]) {
                st.push(it.first);
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

    // Memanggil fungsi DFS
    dfs(result, startNode, vertex, adjList);

    // Menampilkan hasil
    cout << "DFS Traversal: ";
    for (auto node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}