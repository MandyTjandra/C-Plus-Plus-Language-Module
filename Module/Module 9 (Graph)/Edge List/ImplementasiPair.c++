#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    vector<pair<pair<int,int>,int>> edge_list;

    edge_list.push_back({{0, 1}, 3}); // A - B
    edge_list.push_back({{0, 2}, 5}); // A - C
    edge_list.push_back({{0, 2}, 5}); // A - C (duplikat)
    edge_list.push_back({{2, 3}, 7}); // C - D

    // Cetak edge list
    cout << "Edge list:\n";
    for (const auto& edge : edge_list) {
        cout << "(" << edge.first.first << ", " << edge.first.second << ", " << edge.second << ")\n";
    }

    return 0;
}
