# Module 2: Operators and Logic in C++

This module explores how to manipulate data using operators. It covers basic arithmetic for calculations, increment/decrement operators for counting, and logical operators for making comparisons and decisions.

---

## 1. Arithmetic Operators (`SimpleCalculator.c++`)

Arithmetic operators are used to perform common mathematical operations. In C++, standard rules of precedence (PEMDAS) apply.

```cpp
#include <iostream>
using namespace std; 

int main (){
    int x, y, z, A;
    
    // Assigning values
    x = 10;
    y = 20;
    z = 30;
    
    // Calculation: (10 + 20) - 30
    A = x + y - z;
    
    cout << "Nilai dari A adalah " << A; // Output: 0
    return 0;
}

```

**💡 Code Explanation:**

1. **`=` (Assignment)**: Assigns the value on the right to the variable on the left.
2. **`+` (Addition)**: Adds values together (`x + y`).
3. **`-` (Subtraction)**: Subtracts one value from another.
4. **Order of Operations**: C++ evaluates `+` and `-` from left to right unless parentheses are used.

---

## 2. Increment & Decrement Operators (`Operator.c++`)

These are unary operators used to increase or decrease a variable's value by exactly 1. They are commonly used in loops and counters.

```cpp
#include <iostream>
using namespace std; 

int main(){

    int a;

    a = 5;
    cout << a << endl; // Output: 5

    ++a; // Increases value by 1. Value is now 6.
    cout << a << endl;

    --a; // Decreases value by 1. Value is now 5.
    cout << a << endl;

    return 0;
}

```

**💡 Code Explanation:**

1. **`++a` (Pre-increment)**: Adds 1 to `a`. It is equivalent to `a = a + 1`.
2. **`--a` (Pre-decrement)**: Subtracts 1 from `a`. It is equivalent to `a = a - 1`.
3. **Note**: While `a++` and `++a` both add 1, they behave differently when used inside other expressions (e.g., inside a `cout` statement or assignment), though in this standalone example, the result is the same.

---

## 3. Logical & Relational Operators (`Logika.C++`)

Relational operators compare two values, while logical operators combine multiple conditions. In C++, the result of these operations is an integer: `1` for **True** and `0` for **False**.

```cpp
#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;  
    a = 11;  
    b = 24;  
    c = 11;  

    // Case 1: AND Operator
    // (11 == 11) is True AND (24 > 11) is True -> Result True (1)
    d = ((a == c) && (b > a));               
    
    // Case 2: OR Operator
    // (11 >= 24) is False OR (11 < 11) is False -> Result False (0)
    d = ((a >= b) || (a < c));               

    // Case 3: Complex Logic
    // ((24 != 24) False OR (24 > 11) True) -> True
    // True AND (11 == 11) True -> Result True (1)
    d = ((b != b) || (b > c)) && (c == a);   

    return 0;
}

```

**💡 Code Explanation:**

1. **Relational Operators**:
* `==` : Equal to
* `!=` : Not equal to
* `>` / `<` : Greater than / Less than
* `>=` / `<=` : Greater/Less than or equal to


2. **Logical Operators**:
* **`&&` (AND)**: Returns true only if **both** sides are true.
* **`||` (OR)**: Returns true if **at least one** side is true.


3. **Boolean values**: C++ often treats `0` as False and non-zero values (like `1`) as True.
