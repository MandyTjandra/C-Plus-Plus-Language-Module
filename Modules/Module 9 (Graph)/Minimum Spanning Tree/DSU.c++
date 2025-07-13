#include <iostream>
#include <vector>
using namespace std;

class DSU {
private:
    vector<int> parent;
    vector<int> rank;

public:
    // Konstruktor: inisialisasi himpunan
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    // Fungsi find dengan path compression
    int find(int x) {
        if (x != parent[x]) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    // Fungsi union dengan union by rank
    void union_sets(int a, int b) {
        int rootA = find(a);
        int rootB = find(b);

        if (rootA != rootB) {
            if (rank[rootA] < rank[rootB]) {
                parent[rootA] = rootB;
            } else if (rank[rootA] > rank[rootB]) {
                parent[rootB] = rootA;
            } else {
                parent[rootB] = rootA;
                rank[rootA]++;
            }
        }
    }

    void print_sets() {
        cout << "Parent array: ";
        for (int i = 0; i < parent.size(); i++) {
            cout << parent[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n, m;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    DSU dsu(n);

    cout << "Masukkan jumlah operasi union: ";
    cin >> m;

    cout << "Masukkan pasangan elemen untuk union (format: a b):\n";
    for (int i = 0; i < m; i++) {
        int a, b;
        cout << "Union ke-" << i + 1 << ": ";
        cin >> a >> b;
        dsu.union_sets(a, b);
    }

    int q;
    cout << "\nMasukkan jumlah query find: ";
    cin >> q;

    cout << "Masukkan elemen untuk dicek set-nya (format: x y):\n";
    for (int i = 0; i < q; i++) {
        int x, y;
        cout << "Query ke-" << i + 1 << ": ";
        cin >> x >> y;
        if (dsu.find(x) == dsu.find(y)) {
            cout << x << " dan " << y << " berada dalam satu set.\n";
        } else {
            cout << x << " dan " << y << " berada dalam set yang berbeda.\n";
        }
    }

    cout << "\nStruktur parent akhir:\n";
    dsu.print_sets();

    return 0;
}
