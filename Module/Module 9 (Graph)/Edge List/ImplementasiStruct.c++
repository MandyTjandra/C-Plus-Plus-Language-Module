#include <iostream>
#include <vector>
using namespace std;

struct edge {
    int node_1, node_2;
    int weight;
};

int main() {
    vector<edge> edge_list;

    edge_list.push_back({0, 1, 3}); // A - B
    edge_list.push_back({0, 2, 5}); // A - C
    edge_list.push_back({1, 2, 2}); // B - C
    edge_list.push_back({2, 3, 7}); // C - D

    // Cetak edge list
    cout << "Edge list:\n";
    for (const auto& e : edge_list) {
        cout << "(" << e.node_1 << ", " << e.node_2 << ", " << e.weight << ")\n";
    }

    return 0;
}
