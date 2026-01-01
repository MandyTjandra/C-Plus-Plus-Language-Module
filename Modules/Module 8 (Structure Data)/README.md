# Module 8: Data Structures in C++

This module explores the Standard Template Library (STL) containers. These structures allow you to store and organize data efficiently depending on your specific needs (e.g., sorting, searching, or strict ordering).

---

## 1. Vector (Dynamic Array)

A **Vector** is a dynamic array that can grow or shrink in size automatically. Unlike a standard array (`int a[10]`), you do not need to know the size in advance.

* **Key Feature**: Access elements by index (`vec[0]`), flexible size.
* **Library**: `#include <vector>`

```cpp
vector<int> vec = {1, 2}; 
vec.push_back(3); // Adds 3 to the end
vec.pop_back();   // Removes the last element
cout << vec.front(); // Access first element

```

---

## 2. Stack (LIFO)

A **Stack** operates on the **Last In, First Out** principle. Imagine a stack of plates; you can only take the top one off.

* **Key Feature**: Elements are added and removed from the **top** only.
* **Library**: `#include <stack>`

```cpp
stack<int> s;
s.push(10);  // Add to top
s.pop();     // Remove from top
cout << s.top(); // Peek at top

```

---

## 3. Queue (FIFO)

A **Queue** operates on the **First In, First Out** principle. Think of a line at a store; the first person in line is served first.

* **Key Feature**: Elements are added to the **back** and removed from the **front**.
* **Library**: `#include <queue>`

```cpp
queue<int> q;
q.push(10); // Add to back
q.pop();    // Remove from front
cout << q.front(); // Peek at front

```

---

## 4. Priority Queue & Heap

A **Priority Queue** is a special type of queue where elements are ordered by their "priority" rather than just their arrival time. It is implemented using a **Heap** (a binary tree structure).

### A. Max-Heap (Default)

By default, C++ uses a **Max-Heap**, meaning the largest element is always at the top.

```cpp
#include <queue>
using namespace std;

// Standard Declaration (Max-Heap)
priority_queue<int> pq;

pq.push(10);
pq.push(30); 
pq.push(5);

// The largest element (30) is automatically moved to the top
cout << pq.top(); // Output: 30

pq.pop(); // Removes 30. The next largest (10) moves to the top.

```

### B. Min-Heap (Ascending Order)

To pop the *smallest* numbers first, you must specify the container (`vector`) and comparison method (`greater`).

```cpp
// Min-Heap Declaration
priority_queue<int, vector<int>, greater<int>> pq_min;

pq_min.push(10);
pq_min.push(30);
pq_min.push(5);

// The smallest element (5) is at the top
cout << pq_min.top(); // Output: 5

```

### Common Operations

* **`push()`**: Inserts an element and sorts it into the correct position.
* **`top()`**: Accesses the highest priority element (does not remove it).
* **`pop()`**: Removes the highest priority element.
* **`size()`**: Returns the count of elements.
* **`empty()`**: Returns true (`1`) if the queue is empty, false (`0`) otherwise.

---

## 5. Set (Unique & Sorted)

A **Set** is a container that stores **unique** elements (no duplicates) and keeps them **sorted** automatically.

* **Key Feature**: Fast search, no duplicates, auto-sorting.
* **Library**: `#include <set>`

```cpp
set<int> s = {1, 4, 2}; // Stores as {1, 2, 4}
s.insert(3); // Stores as {1, 2, 3, 4}
s.erase(2);  // Removes 2

```

---

## 6. Map (Key-Value Pairs)

A **Map** stores data in **Key-Value** pairs. Every key is unique and is used to find the value associated with it, like a dictionary.

* **Key Feature**: Look up values using a custom key (ID, Name, etc.).
* **Library**: `#include <map>`

```cpp
map<int, string> students;
students[1] = "Alice"; // Insert Key 1 -> Value "Alice"
cout << students[1];   // Access Value

```

---

### Comparison Cheat Sheet

| Structure | Ordering | Duplicates? | Access Method | Best For... |
| --- | --- | --- | --- | --- |
| **Vector** | Insertion Order | Yes | Index `[]` | Resizable Lists |
| **Stack** | LIFO | Yes | `top()` | Undo features, Recursion |
| **Queue** | FIFO | Yes | `front()` | Print jobs, buffering |
| **Priority Queue** | Heap Sort (Max/Min) | Yes | `top()` | Scheduling tasks by urgency |
| **Set** | Sorted Order | **No** | Iterator | Unique collections |
| **Map** | Sorted by Key | **No** (Keys) | Key `[]` | Dictionaries, Database IDs |
