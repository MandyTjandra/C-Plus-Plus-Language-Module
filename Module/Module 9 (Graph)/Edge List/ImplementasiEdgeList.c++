#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Edge list: vector of tuples (u, v, w)
    vector<pair<pair<int, int>, int>> edge_list;

    // Tambahkan edges: (u, v, w)
    edge_list.push_back({{0, 1}, 3}); // A -> B
    edge_list.push_back({{0, 2}, 2}); // A -> C
    edge_list.push_back({{1, 2}, 5}); // B -> C
    edge_list.push_back({{2, 3}, 7}); // C -> D

    // Cetak edge list
    cout << "Edge list:\n";
    for (auto edge : edge_list) {
        cout << "(" << edge.first.first << ", " << edge.first.second << ", " << edge.second << ")\n";
    }

    return 0;
}
