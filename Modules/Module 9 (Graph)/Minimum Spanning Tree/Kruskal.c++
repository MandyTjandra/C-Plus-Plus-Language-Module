#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Struktur untuk menyimpan edge: (bobot, simpul1, simpul2)
struct Edge {
    int u, v, weight;

    // Operator untuk sorting edge berdasarkan bobot
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

// Disjoint Set Union (Union-Find)
class DSU {
private:
    vector<int> parent, rank;

public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (x != parent[x])
            parent[x] = find(parent[x]); // Path compression
        return parent[x];
    }

    bool unite(int x, int y) {
        int root_x = find(x);
        int root_y = find(y);

        if (root_x == root_y)
            return false; // Sudah terhubung

        // Union by rank
        if (rank[root_x] < rank[root_y])
            parent[root_x] = root_y;
        else if (rank[root_x] > rank[root_y])
            parent[root_y] = root_x;
        else {
            parent[root_y] = root_x;
            rank[root_x]++;
        }

        return true;
    }
};

int main() {
    int V, E;
    cout << "Masukkan jumlah simpul (vertex): ";
    cin >> V;

    cout << "Masukkan jumlah sisi (edge): ";
    cin >> E;

    vector<Edge> edges;

    cout << "Masukkan data edge dalam format: asal tujuan bobot\n";
    for (int i = 0; i < E; ++i) {
        int u, v, w;
        cout << "Edge ke-" << i + 1 << ": ";
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    // Sortir semua edge berdasarkan bobot
    sort(edges.begin(), edges.end());

    DSU dsu(V);
    vector<Edge> mst;
    int total_weight = 0;

    for (Edge& edge : edges) {
        if (dsu.unite(edge.u, edge.v)) {
            mst.push_back(edge);
            total_weight += edge.weight;
        }
    }

    cout << "\nMinimum Spanning Tree:\n";
    for (Edge& edge : mst) {
        cout << edge.u << " - " << edge.v << " (Bobot: " << edge.weight << ")\n";
    }

    cout << "Total bobot MST: " << total_weight << endl;

    return 0;
}
