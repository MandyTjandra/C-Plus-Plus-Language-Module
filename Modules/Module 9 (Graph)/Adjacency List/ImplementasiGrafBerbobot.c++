#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    vector<pair<int, int>> adj_list[4];

    // Tambahkan edge ke adjacency list
    adj_list[0].push_back(make_pair(1, 3)); // A -> B
    adj_list[0].push_back(make_pair(2, 2)); // A -> C
    adj_list[1].push_back(make_pair(2, 5)); // B -> C
    adj_list[2].push_back(make_pair(3, 7)); // C -> D

    // Cetak adjacency list
    for (int i = 0; i < 4; ++i) {
        cout << "Node " << i << ": ";
        for (auto edge : adj_list[i]) {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        cout << endl;
    }

    return 0;
}   
