#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void dijkstra(vector<int> &dist, int source, int V, const vector<vector<pair<int, int>>> &adj_list) {
    vector<bool> visited(V, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    const int INF = 1e9;
    fill(dist.begin(), dist.end(), INF);

    pq.push({0, source});
    dist[source] = 0;

    while (!pq.empty()) {
        auto [current_dist, current_vertex] = pq.top();
        pq.pop();

        if (visited[current_vertex])
            continue;
        visited[current_vertex] = true;

        for (auto [weight, next_vertex] : adj_list[current_vertex]) {
            if (current_dist + weight < dist[next_vertex]) {
                dist[next_vertex] = current_dist + weight;
                pq.push({dist[next_vertex], next_vertex});
            }
        }
    }
}

int main() {
    int V, E;
    cout << "Masukkan jumlah simpul (vertex): ";
    cin >> V;

    cout << "Masukkan jumlah sisi (edge): ";
    cin >> E;

    vector<vector<pair<int, int>>> adj_list(V);

    cout << "Masukkan data edge dalam format: asal tujuan bobot\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cout << "Edge ke-" << i + 1 << ": ";
        cin >> u >> v >> w;
        adj_list[u].push_back({w, v});
        // Jika graf tidak berarah, tambahkan juga baris berikut:
        // adj_list[v].push_back({w, u});
    }

    int source;
    cout << "Masukkan node sumber: ";
    cin >> source;

    vector<int> dist(V);
    dijkstra(dist, source, V, adj_list);

    cout << "\nJarak terpendek dari node " << source << ":\n";
    for (int i = 0; i < V; i++) {
        cout << "Ke node " << i << ": " << dist[i] << endl;
    }

    return 0;
}
