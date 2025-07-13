#include <iostream>
#include <vector>
using namespace std;

// Define the struct for a car
struct Car {
    string brand;
    string model;
    int year;
    float price;
};

int main() {
    vector<Car> cars; // Use a vector to store car data dynamically
    string choice;

    do {
        Car car;

        // Input car details
        cout << "Enter car brand: ";
        cin >> car.brand;
        cout << "Enter car model: ";
        cin >> car.model;
        cout << "Enter car year: ";
        cin >> car.year;
        cout << "Enter car price: ";
        cin >> car.price;

        // Add the car to the vector
        cars.push_back(car);

        // Ask if the user wants to stop or continue
        cout << "Do you want to add another car? (yes/no): ";
        cin >> choice;

    } while (choice != "no"); // Continue until the user says "no"

    // Display all car details
    cout << "\nCar Details:\n";
    for (size_t i = 0; i < cars.size(); i++) {
    // Safe to compare i with cars.size() because both are size_t
        cout << "Car " << i + 1 << ":\n";
        cout << "  Brand: " << cars[i].brand << "\n";
        cout << "  Model: " << cars[i].model << "\n";
        cout << "  Year: " << cars[i].year << "\n";
        cout << "  Price: $" << cars[i].price << "\n\n";
    }

    return 0;
}
