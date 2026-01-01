# Module 9: Graph Representations and Algorithms in C++

This module covers **Graphs**, a fundamental data structure consisting of nodes (vertices) and connections (edges). It moves from basic representations to advanced algorithms for traversal (BFS/DFS), Minimum Spanning Trees (MST), and finding Shortest Paths.

---

## 1. Graph Representations

Before running algorithms, you must represent the graph in code. We use three main methods.

### A. Adjacency Matrix (`GrafTakBerbobot.c++`)
A 2D array where `matrix[i][j] = 1` means there is an edge. Best for dense graphs.

```cpp
int adj_matrix[4][4];
// Connect Node 0 and Node 1
adj_matrix[0][1] = 1; 
adj_matrix[1][0] = 1; 

```

### B. Adjacency List (`ImplementasiGrafBerbobot.c++`)

An array of Vectors. Each node stores a list of its neighbors. Efficient for memory.

```cpp
vector<pair<int, int>> adj_list[4];
// Node 0 connects to Node 1 with weight 3
adj_list[0].push_back(make_pair(1, 3)); 

```

### C. Edge List (`ImplementasiEdgeList.c++`)

A simple list of all edges `(u, v, weight)`. Best for algorithms that sort edges (like Kruskal's).

```cpp
struct edge { int u, v, w; };
vector<edge> edges;
edges.push_back({0, 1, 3});

```

---

## 2. Graph Traversal (`BFS.C++` & `DFS.c++`)

Traversal means visiting every node in the graph. There are two main strategies.

### Breadth-First Search (BFS)

BFS explores neighbors layer by layer (closest nodes first). It uses a **Queue** (FIFO). It is useful for finding the shortest path in unweighted graphs.

```cpp
void bfs(vector<long> &result, long start, long vertex, const vector<vector<pair<long, long>>> &adjList) {
    vector<bool> visited(vertex, false);
    queue<long> q;

    q.push(start);
    visited[start] = true;
    result.push_back(start);

    while (!q.empty()) {
        long temp = q.front(); // Get front element
        q.pop();

        for (auto it : adjList[temp]) {
            if (!visited[it.first]) {
                q.push(it.first);
                visited[it.first] = true;
                result.push_back(it.first);
            }
        }
    }
}

```

### Depth-First Search (DFS)

DFS goes as deep as possible down one path before backtracking. It uses a **Stack** (LIFO) or Recursion. It is useful for cycle detection and maze solving.

```cpp
void dfs(vector<long> &result, long start, long vertex, const vector<vector<pair<long, long>>> &adjList) {
    vector<bool> visited(vertex, false);
    stack<long> st;

    st.push(start);
    visited[start] = true;
    result.push_back(start);

    while (!st.empty()) {
        long temp = st.top(); // Get top element
        st.pop();

        if (!visited[temp]) {
            result.push_back(temp);
            visited[temp] = true;
        }

        for (auto it : adjList[temp]) {
            if (!visited[it.first]) {
                st.push(it.first);
            }
        }
    }
}

```

---

## 3. Minimum Spanning Tree (MST) (`Kruskal.c++`)

An MST connects all vertices with the minimum total edge weight without forming cycles. We use **Kruskal's Algorithm** combined with a **Disjoint Set Union (DSU)**.

**Key Steps:**

1. **Sort** all edges from smallest to largest weight.
2. Iterate through edges and use **DSU** to check if adding the edge creates a cycle.
3. If no cycle, add it to the MST.

```cpp
// DSU find with Path Compression
int find(int x) {
    if (x != parent[x]) parent[x] = find(parent[x]);
    return parent[x];
}

// Main Kruskal Logic
sort(edges.begin(), edges.end()); // Step 1
for (Edge& edge : edges) {
    if (dsu.unite(edge.u, edge.v)) { // Step 2 & 3
        mst.push_back(edge);
        total_weight += edge.weight;
    }
}

```

---

## 4. Shortest Path Algorithms

These algorithms find the "cheapest" path between nodes.

### A. Dijkstra's Algorithm (`Dijkstra.c++`)

Finds shortest paths from a single source to all other nodes. It uses a **Priority Queue** to always expand the cheapest known node.

* **Best for:** Weighted graphs with non-negative weights.
* **Complexity:** O(E log V).

```cpp
void djikstra(vector<int> &dist, int source, int V, const vector<vector<pair<int, int>>> &adj_list) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int current_dist = pq.top().first;
        int current_vertex = pq.top().second;
        pq.pop();

        for (auto neighbor : adj_list[current_vertex]) {
            int weight = neighbor.first;
            int next_vertex = neighbor.second;

            // Relaxation Step
            if (current_dist + weight < dist[next_vertex]) {
                dist[next_vertex] = current_dist + weight;
                pq.push({dist[next_vertex], next_vertex});
            }
        }
    }
}

```

### B. Bellman-Ford Algorithm (`Bellman_Ford.c++`)

Also finds shortest paths from a single source, but it can handle **Negative Weights**. It relaxes all edges `V-1` times.

* **Best for:** Graphs with negative edges or detecting negative cycles.
* **Complexity:** O(V * E) (Slower than Dijkstra).

```cpp
void bellman_ford(...) {
    dist[source] = 0;

    // Relax all edges V-1 times
    for (int i = 1; i < V; ++i) {
        for (int j = 0; j < E; ++j) {
            int u = edge_list[j].first.first;
            int v = edge_list[j].first.second;
            int weight = edge_list[j].second;

            if (dist[u] != INF && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }
    // Note: A further check can detect negative cycles
}

```

### C. Floyd-Warshall Algorithm (`Floyd_Warshall.C++`)

Finds the shortest paths between **ALL pairs** of nodes (e.g., A to B, A to C, B to C). It uses Dynamic Programming with three nested loops.

* **Best for:** Small graphs where you need every possible connection distance.
* **Complexity:** O(V^3).

```cpp
void floyd_warshall(vector<vector<int>> &dist, int V) {
    for (int k = 0; k < V; ++k) {     // Intermediate node
        for (int i = 0; i < V; ++i) { // Source
            for (int j = 0; j < V; ++j) { // Destination
                // If path through k is shorter, update it
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

```
