# Module 1: Input, Output, and Variables in C++

This module introduces the fundamental structure of a C++ program. It covers how to display text and escape sequences to the user, how to receive input, and how to store data using variables, constants, and preprocessor directives.

---

## 1. Basic Structure & Output (`Cout.c++` & `CoutAdvaced.c++`)

Every C++ program starts with including the standard input-output library and using the standard namespace. The entry point of the program is the `main` function.

```cpp
#include <iostream>
using namespace std; 

int main(){
    // Basic string output
    cout << "Ini adalah sebuah string" << endl;

    // Advanced output with escape characters
    cout << "Ini adalah sebuah string\nAku adalah new line\n\tAku adalah karakter" << endl;
    
    return 0;
}

```

**💡 Code Explanation:**

1. **`#include <iostream>`**: Includes the Input/Output Stream library, allowing us to use `cout` and `cin`.
2. **`using namespace std;`**: Tells the compiler to use the standard namespace so we don't have to type `std::cout`.
3. **`cout <<`**: "Character Output". Prints text to the console. The `<<` operator directs the data to the output.
4. **`endl`**: Inserts a new line and flushes the output buffer.
5. **Escape Sequences**:
* **`\n`**: Creates a new line (similar to `endl`).
* **`\t`**: Creates a horizontal tab space.



---

## 2. Variables, Constants, and Data Types

C++ is a statically typed language. You can define values using standard variables, the `const` keyword, or preprocessor directives (`#define`).

```cpp
#include <iostream>
using namespace std;

#define konstIntDef    23       // Preprocessor directive constant
#define konstDoubleDef 23.11  

int main (){
    // 1. Standard Variables
    int a = 2;
    char b = 'x';
    
    // 2. Constants (Read-only variables)
    const int    konstInt = 23;  
    const double konstDouble = 23.12;

    // Outputting variables
    cout << "Nilai dari a adalah " << a << ' ' << "Nilai dari b adalah " << b;
    cout << "\nConstant values: " << konstInt << " and " << konstDoubleDef;
    
    return 0;
}

```

**💡 Code Explanation:**

1. **`int`**: Stores whole numbers (e.g., `2`, `23`).
2. **`char`**: Stores a single character enclosed in single quotes (e.g., `'x'`).
3. **`double`**: Stores decimal numbers (e.g., `23.12`).
4. **`const`**: Declares a variable whose value cannot be changed after initialization. It is type-safe.
5. **`#define`**: A preprocessor directive that replaces text before compiling. It does not use memory like a variable but simply swaps the text `konstIntDef` with `23`.

---

## 3. Handling User Input (`Cin.c++`)

Reading input in C++ is done using `cin` and the extraction operator `>>`.

```cpp
#include <iostream>
using namespace std;
  
int main()   
{  
    int n;  
    
    // Waiting for user input
    cin >> n;
    
    cout << "n mempunyai nilai = " << n;
    return 0;  
} 

```

**💡 Code Explanation:**

1. **`cin >>`**: "Character Input". Takes data from the user (keyboard) and stores it into a variable.
2. **`>>`**: The extraction operator. It directs the input flow *into* the variable `n`.
3. **Flow**: The program pauses at `cin >> n;` until the user types a value and presses Enter.
