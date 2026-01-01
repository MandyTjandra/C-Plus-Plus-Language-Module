# Module 5: Functions and Recursion in C++

This module introduces **Functions**, which allow you to break code into smaller, reusable blocks. It covers how to pass data to functions (Parameters), how to get data back (Return values), Function Overloading, and **Recursion** (functions that call themselves).

---

## 1. Structure of a Function (`ParameterFungsi.c++` & `FungsiString.c++`)

A function is a block of code that runs only when it is called. You can define a simple function or pass data into it using **parameters**.

```cpp
#include <iostream>
using namespace std;

// 1. Function without parameters
void cetak() {
    cout << "Aku Sebuah Fungsi\n";
}

// 2. Function with parameters (accepts data)
void jumlah(int a, int b) {
    int hasil = a + b;
    cout << hasil << "\n";
}

int main() {
    cetak();        // Calling the simple function
    jumlah(2, 5);   // Calling function with arguments 2 and 5
    return 0;
}

```

**💡 Code Explanation:**

1. **`void`**: Indicates that the function performs an action but does not send a value back to the main program.
2. **Parameters**: Variables defined in the function parentheses (like `int a`, `int b`).
3. **Arguments**: The actual data you send to the function when you call it (like `2` and `5`).

---

## 2. Return Values (`ReturnFungsi.c++`)

If you want a function to calculate a value and give it back to the code that called it, use a return type (such as `int` or `string`) instead of `void`.

```cpp
#include <iostream>
using namespace std;
 
// Function Definition
int jumlah(int a, int b)
{
    int hasil = a;
    hasil += b;
    return hasil; // Sends 'hasil' back to the caller
}
 
int main()
{
    int x = 2, y = 3, hasil;
    
    // The function returns 5, which is stored in 'hasil'
    hasil = jumlah(x, y);
    
    cout << hasil << "\n";
    return 0;
}

```

**💡 Code Explanation:**

1. **`int jumlah`**: The `int` before the function name means this function must return an integer.
2. **`return`**: Stops the function immediately and sends the value back.

---

## 3. Prototypes and Overloading (`PrototipeFungsi.c++` & `PemanggilanFungsi.c++`)

**Prototypes** allow you to list a function at the top of your file but write the code at the bottom. **Overloading** allows you to have multiple functions with the exact same name, as long as they have different parameters.

```cpp
#include <iostream>
using namespace std;

// Function Prototype
void cetak();

// Overloading: Same name, different parameter (string)
void cetak(string pesan){
    cout << pesan << endl;
}

int main()
{
    cetak();                 // Calls the version with NO parameters
    cetak("Halo, dunia");    // Calls the version WITH a string parameter
    return 0;
}

// Function Definition for the prototype above
void cetak()
{
    cout << "Aku Sebuah Fungsi\n";
}

```

---

## 4. Recursion and the Base Case (`RecursiveDanBaseCase.c++`)

Recursion is a technique where a function calls itself. To prevent it from running forever (infinite loop), you must include a **Base Case** (a stopping condition).

```cpp
#include <iostream>
using namespace std;
 
int power(int a, int m)
{
    // BASE CASE: When m reaches 0, stop and return 1.
    if (m == 0) return 1;       
    
    // RECURSIVE CASE: Call the function again with m - 1
    return (a * power(a, m-1)); 
}
 
int main()
{
    // Calculates 2 raised to the power of 3
    cout << power(2,3) << "\n";
    return 0;
}

```

**💡 Code Explanation:**

1. **Goal**: Calculate 2 to the power of 3 (2 * 2 * 2).
2. **Step 1**: `power(2, 3)` returns `2 * power(2, 2)`
3. **Step 2**: `power(2, 2)` returns `2 * power(2, 1)`
4. **Step 3**: `power(2, 1)` returns `2 * power(2, 0)`
5. **Step 4 (Base Case)**: `power(2, 0)` returns `1`.
6. **Result**: The values multiply back up: 2 * 2 * 2 * 1 = 8.
