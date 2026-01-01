# Module 6: Math Algorithms in C++

This module explores fundamental mathematical algorithms commonly used in programming. It covers the modulo operator, various methods for checking prime numbers (from naive to optimized), and algorithms for finding the Greatest Common Divisor (GCD/FPB) and Least Common Multiple (LCM/KPK).

---

## 1. Modular Arithmetic (`Modular.cpp`)

The modulus operator (`%`) calculates the remainder of a division operation. It is most commonly used to check if a number is divisible by another, such as determining even or odd numbers.

```cpp
#include <iostream>
using namespace std;

int main(){
    int x;
    
    // Infinite loop to keep asking for input
    for(int i = 0; ; i++){
        cout << "Masukan angka yang ingin diketahui apakah genap atau ganjil: " << endl;
        cin >> x;
        
        // Use Modulo to check for remainder
        if (x % 2 == 0){ 
            cout << "Angka tersebut adalah angka genap.\n" << endl;
        } else {
            cout << "Angka tersebut adalah angka ganjil. \n" << endl;
        }
    } 
    return 0;
}

```

**💡 Code Explanation:**

* **`x % 2`**: Divides `x` by 2 and returns the remainder.
* **Even Check**: If the remainder is `0`, the number is even.
* **Odd Check**: If the remainder is `1`, the number is odd.

---

## 2. Prime Numbers

A prime number is a number greater than 1 that is only divisible by 1 and itself. We cover three methods, from simple to highly efficient.

### Naive Approach (`Prime2.cpp`)

This method checks divisibility by every number from 2 up to `n-1`. It is simple but slow for large numbers.

```cpp
bool isPrimeNaive(int n){ 
    if(n <= 1) return false;
    
    // Loop checks every number up to n
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false; // Found a divisor, not prime
        }
    }
    return true;
}

```

### Optimized Approach (`Prime.cpp` & `IterasiPrima.c++`)

You only need to check divisors up to the **square root** of the number. If a number `n` has a divisor larger than `sqrt(n)`, it must also have a matching divisor smaller than `sqrt(n)`.

```cpp
#include <cmath> // Required for sqrt()

bool isPrime(int x) {
    if (x <= 1) return false;
    
    // Optimization: Check only up to square root of x
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

```

### Sieve of Eratosthenes (`Sieve_of_Eratosthenes.c++`)

The most efficient algorithm to find *all* prime numbers up to a limit `n`. It works by iteratively marking the multiples of each prime starting from 2.

```cpp
void SieveOfEratosthenes(int n){
    // Create a boolean array and set all to true
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        // If p is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p to false (not prime)
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    // Print results where prime[p] is still true...
}

```

---

## 3. GCD & LCM (FPB & KPK)

These algorithms are fundamental for solving problems involving cycles, fractions, and number theory.

### Greatest Common Divisor (FPB) (`FPB.c++`)

The **Euclidean Algorithm** is an efficient recursive method to find the GCD.

```cpp
// Recursive function for FPB
long long fpb(long long int a, long long int b)
{
  if (b == 0)
    return a; // Base case
  return fpb(b, a % b); // Recursive step
}

```

**Algorithm Logic:**

1. FPB(a, b) is the same as FPB(b, a % b).
2. Repeat until the second number becomes 0. The first number is then the result.

### Least Common Multiple (KPK) (`KPK2.c++` & `KPK.c++`)

The LCM can be calculated efficiently using the GCD (FPB) formula:
`LCM(a, b) = (a * b) / GCD(a, b)`

```cpp
// Optimized KPK using FPB function
int KPK(int a, int b) {
    return (a * b) / FPB(a, b);
}

```

**Note on Naive KPK (`KPK.c++`)**:
There is also a "brute force" method that checks multiples one by one. While easier to understand, it is much slower than the formula above.

```cpp
int kpk_naive(int a, int b) {
    int terbesar = max(a, b);
    // Start checking from the largest number and increment
    for (int i = terbesar; ; i += terbesar) {
        if (i % min(a,b) == 0) return i;
    }
}

```
