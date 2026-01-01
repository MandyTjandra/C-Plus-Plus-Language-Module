# Module 3: Decision Making and Logic in C++

This module covers how to control the flow of a C++ program using conditional statements. It explains how to make decisions using `if`, `else`, and `switch` statements to execute different blocks of code based on specific conditions.

---

## 1. If ... Else Statements (`If.c++` & `IfElse.c++`)

The `if` statement allows the program to execute a block of code only if a specified condition is true. The `else` statement specifies a block of code to be executed if the condition is false.

```cpp
#include <iostream>
#define DATANG 1
using namespace std;

int main()
{
    // Basic If Example
    int gasoline = 3;
    if (gasoline < 10)
    {
        cout << "Lampu Indikator menyala!\n";
    }

    // If-Else Example with Constants
    int hadir = DATANG;
    if (hadir) // Checks if 'hadir' is non-zero (True)
    {
        cout << "V\n";
    } else {
        cout << "X\n";
    }
    
    return 0;
}

```

**💡 Code Explanation:**

1. **`if (condition)`**: Checks if the expression inside parentheses is true. If `gasoline < 10` is true, the warning message prints.
2. **`#define DATANG 1`**: Defines a constant value. In C++, any non-zero integer is treated as **true** in boolean logic.
3. **`else`**: Provides a fallback. If the `if` condition is false (e.g., if `hadir` was 0), the code inside `else` runs.

---

## 2. Else If (Multiple Conditions) (`Elseif.c++`)

When you need to check more than one condition, use `else if`. The program will test conditions in order and execute the block for the first one that is true.

```cpp
#include <iostream>
using namespace std;

int main(){
    char arr;

    cout << "Masukan huruf dari A sampai Z" << endl;
    cin >> arr;

    // Checking for 'A' (uppercase or lowercase)
    if(arr == 'a' || arr == 'A'){
        cout << "Huruf yang dimasukan adalah A." << endl;
    } 
    // Checking for 'B'
    else if (arr == 'b' || arr == 'B') { 
        cout << "Huruf yang dimasukan adalah B." << endl;
    } 
    // Checking for 'C'
    else if (arr == 'c' || arr == 'C'){
        cout << "Huruf yang dimasukan adalah C." << endl;
    } 
    // Default case if none match
    else {
        cout << "Huruf selain A atau B atau C." << endl;
    }
}

```

**💡 Code Explanation:**

1. **`else if`**: Tests a new condition if the previous `if` was false.
2. **Logical OR (`||`)**: Allows the condition to be true if *either* side is true. For example, `arr == 'a' || arr == 'A'` handles both lowercase and uppercase inputs.
3. **Flow**: Once a condition is met (e.g., input is 'B'), the program skips the remaining `else if` and `else` blocks.

---

## 3. Switch Statements (`Switch.c++`)

When checking a single variable against many specific values (like menu options or codes), a `switch` statement is cleaner than many `else if` blocks.

```cpp
#include <iostream>
using namespace std;

int main()
{
    char platNomor;
    cout << "Masukkan huruf awal plat nomor anda: ";
    cin >> platNomor;

    switch(platNomor)
    {
        case 'L':
            cout << "Surabaya";
            break;

        case 'B':
            cout << "Jakarta";
            break;

        case 'D':
            cout << "Bandung";
            break;

        case 'N':
            cout << "Malang/Lumajang";
            break;

        default:
            cout << "Karakter plat nomor tidak diketahui";
    } 
    return 0;
}

```

**💡 Code Explanation:**

1. **`switch(variable)`**: The variable being tested (here, `platNomor`).
2. **`case 'X':`**: If the variable matches 'X', the code below this line runs.
3. **`break;`**: Crucial command. It stops the code from "falling through" to the next case. Without `break`, if you typed 'L', it would print "Surabaya" AND "Jakarta" AND "Bandung", etc.
4. **`default:`**: Runs if no cases match (similar to `else`).

---

## 4. Short Hand If (Ternary Operator) (`IfLain.c++`)

For simple yes/no decisions that result in a value, you can use the ternary operator to write an `if...else` in one line.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int mark;
    
    cin >> mark;
    // Syntax: (condition) ? value_if_true : value_if_false;
    cout << (mark >= 75 ? "Lulus\n" : "Tidak Lulus\n");

    return 0;
}

```

**💡 Code Explanation:**

1. **`?`**: The "if" part. Checks `mark >= 75`.
2. **`:`**: The "else" part.
3. **Usage**: If the condition is true, "Lulus\n" is sent to `cout`. If false, "Tidak Lulus\n" is sent.
