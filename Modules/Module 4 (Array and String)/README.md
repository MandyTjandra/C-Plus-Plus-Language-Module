# Module 4: Loops, Arrays, and Strings in C++

This module combines control flow (loops) with data structures (arrays and strings). It covers how to repeat code execution, how to store collections of data, and how to manipulate text efficiently using the `string` class.

---

## 1. Iteration (Loops)

Loops allow you to repeat a block of code multiple times.

### Basic Loops (`For.c++`, `While.c++`, `DoWhile.C++`)

* **For Loop**: Best when you know the number of iterations.
* **While Loop**: Best when the number of iterations depends on a condition.
* **Do-While**: Guarantees the code runs at least once.

```cpp
// Example from While.c++
int i = 0;
while (i < 10)
{
    cout << "Hello World! ke-" <<  i << "\n";
    i++;
}

```

### Infinite Loops (`InfiniteLoop.c++`)

Be careful with your loop conditions. If the condition never becomes `false`, the program will hang or crash.

```cpp
int i;
// This loop decreases 'i', so 'i' will always be <= 100. It never stops.
for (i = 1; i <= 100; i--) {
    // Infinite loop...
}

```

### Nested Loops (`Nested.C++`)

You can place a loop inside another loop. The inner loop finishes all its iterations for *every single* iteration of the outer loop.

```cpp
int i, j;
for (i = 1; i <= 10; ++i) {
    cout << "Outer loop, iteration " << i << endl;

    for (j = 1; j <= 10; j++) {
        // This runs 10 times for every 1 time the outer loop runs
        cout << "Inner loop, i = " << i << ", j = " << j << endl;
    }
}

```

---

## 2. Arrays

Arrays store multiple values of the same type in a single variable.

### Basic Array Usage (`Array.c++`, `AssignArray.c++`)

Arrays are **zero-indexed**, meaning the first element is at `[0]`.

```cpp
// Declaration and Initialization
int arr[4] = {10, 8, 7, 2};

// Accessing elements
cout << arr[2]; // Output: 7

// Modifying elements
arr[2] = 9;
cout << arr[2]; // Output: 9

```

### Multidimensional Arrays (`Array2D.C++`)

A 2D array acts like a table with rows and columns.

```cpp
int matriks[5][6]; // [Rows][Columns]

matriks[2][3] = 100; // Set value at Row 2, Column 3
cout << matriks[2][3];

```

---

## 3. String Manipulation

C++ strings (`std::string`) are more powerful than character arrays. You can find their length, combine them, and read full sentences.

### Getting String Length (`FungsiLength.c++`)

Use the `.length()` function to count the number of characters in a string.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main () {
	string a = "Halo";
	cout << "Panjang string a adalah " << a.length() << "\n"; // Output: 4
	return 0;
}

```

### Reading Full Lines (`Getline.C++`)

Standard `cin >>` stops reading at the first space. To read a full sentence (e.g., "Hello World"), use `getline()`.

```cpp
string input;
cout << "Enter a sentence: ";

// getline(source, variable)
getline(cin, input); 

cout << "You entered: " << input << endl;

```

### Copying & Concatenation (`FungsiCopy.c++`, `FungsiConcatenation.c++`)

* **Copy**: `string b = a;` copies the text from `a` to `b`.
* **Concatenation**: `string c = a + b;` joins two strings together.

### Comparison (`FungsiComparation.c++`)

You can compare strings directly using `==`.

```cpp
string a = "Halo";
string b = "Hai";

if(a == b) {
    cout << "Strings are equal";
} else {
    cout << "Strings are different"; // This executes
}

```
