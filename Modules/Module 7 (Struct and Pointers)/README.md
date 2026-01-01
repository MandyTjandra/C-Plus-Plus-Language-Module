# Module 7: Pointers and Structures in C++

This module covers **Pointers**, which allow direct interaction with memory addresses, and **Structures (structs)**, which allow you to group related variables into a single object.

---

## 1. Pointers and Dereferencing (`PengenalanPointers.c++` & `Deferencing.c++`)

A **Pointer** is a variable that stores the **memory address** of another variable, rather than storing a value directly.

### Key Operators:

* **`&` (Address-of Operator)**: Gets the memory address of a variable.
* **`*` (Dereference Operator)**: Accesses the **value** stored at that specific address.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;    // Pointer stores the address of 'food'

    // 1. Output the Address
    cout << ptr << "\n";    // Prints a memory address (e.g., 0x61ff14)

    // 2. Output the Value (Dereferencing)
    cout << *ptr << "\n";   // Prints "Pizza"
    
    // 3. Modifying via Pointer
    *ptr = "Burger";        // Changing *ptr changes 'food' too!
    
    return 0;
}

```

**💡 Code Explanation:**

1. **`string* ptr`**: Declares a pointer variable named `ptr` that can point to a string.
2. **`&food`**: Retrieves the location in memory where "Pizza" is stored.
3. **`*ptr`**: Looks at the address held by `ptr` and grabs the data found there.

---

## 2. Pointers in Functions (Pass by Reference) (`Pointers2.c++`)

Pointers are useful for modifying variables defined in other functions. This is often used for operations like **swapping** values.

```cpp
#include <iostream>
using namespace std;

// Function accepts memory addresses (pointers)
void swap(int* num1, int* num2) {
    int temp = *num1; // Get value at address num1
    *num1 = *num2;    // Put value of num2 into address num1
    *num2 = temp;     // Put temp value into address num2
}

int main() {
    int a = 5, b = 10;
    
    // Pass the ADDRESSES of a and b using &
    swap(&a, &b);

    cout << "a = " << a << ", b = " << b << endl; // Output: a = 10, b = 5
    return 0;
}

```

**💡 Code Explanation:**

1. **Arguments**: We pass `&a` and `&b` because the function expects pointers (`int*`).
2. **Effect**: Because the function modifies the actual memory addresses, the changes persist even after the function finishes.

---

## 3. Structures (Structs) (`Struct.c++`)

A `struct` is a user-defined data type that groups related variables of different types (like `string`, `int`, etc.) under one name.

```cpp
#include <iostream>
using namespace std;

// Defining the blueprint
struct osus {
    string name;
    int age;
    string college;
};

int main() {
    // Creating an object (variable) from the struct
    osus student1;
    
    // Assigning values using the dot (.) operator
    student1.name = "Mandy";
    student1.age = 19;
    student1.college = "ITS";

    cout << "Name: " << student1.name << endl;
    return 0;
}

```

**💡 Code Explanation:**

1. **`struct osus`**: Creates a new type called `osus` that contains a name, age, and college.
2. **`student1.name`**: The dot operator `.` allows you to access or modify specific members inside the struct.

---

## 4. Structs with Vectors (`Struct2.c++`)

You can combine structs with **Vectors** (dynamic arrays) to create lists of complex objects, such as a database of cars.

```cpp
#include <iostream>
#include <vector>
using namespace std;

struct Car {
    string brand;
    int year;
};

int main() {
    vector<Car> cars; // A list that stores 'Car' objects
    string choice;

    do {
        Car tempCar;
        cout << "Enter brand: ";
        cin >> tempCar.brand;
        
        // Add the filled struct to the vector
        cars.push_back(tempCar);
        
        cout << "Add another? (yes/no): ";
        cin >> choice;
    } while (choice != "no");

    // Displaying the list
    for (size_t i = 0; i < cars.size(); i++) {
        cout << cars[i].brand << endl;
    }
    return 0;
}

```

**💡 Code Explanation:**

1. **`vector<Car>`**: Instead of `vector<int>`, this list stores entire `Car` structures.
2. **`cars.push_back(tempCar)`**: Adds the new car object to the end of the list.
3. **`cars[i].brand`**: Accesses the car at index `i`, then accesses the `brand` variable inside that car.
