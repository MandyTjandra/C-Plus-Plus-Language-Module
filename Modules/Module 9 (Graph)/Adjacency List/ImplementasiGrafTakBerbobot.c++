#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> adj_list[4];

    // Tambahkan edge ke adjacency list
    adj_list[0].push_back(1); // A -> B
    adj_list[1].push_back(0); // B -> A
    adj_list[0].push_back(2); // A -> C
    adj_list[2].push_back(0); // C -> A
    adj_list[1].push_back(2); // B -> C
    adj_list[2].push_back(1); // C -> B
    adj_list[2].push_back(3); // C -> D
    adj_list[3].push_back(2); // D -> C

    // Cetak adjacency list
    for (int i = 0; i < 4; ++i) {
        cout << "Node " << i << ": ";
        for (int neighbor : adj_list[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
