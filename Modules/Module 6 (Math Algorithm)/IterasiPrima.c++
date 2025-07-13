#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime using sqrt optimization
bool isPrimeSqrt(int num) {
    if (num <= 1) {
        return false; // Numbers <= 1 are not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false; // Found a divisor, not prime
        }
    }
    return true; // No divisors found, it's prime
}

// Function to generate and print all prime numbers up to n
void simplePrimeGeneration(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrimeSqrt(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;

    cout << "Masukkan angka hingga bilangan prima dihasilkan: ";
    cin >> n;

    simplePrimeGeneration(n);

    return 0;
}
