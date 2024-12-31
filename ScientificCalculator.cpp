#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

using namespace std;

// Function for displaying the menu
void displayMenu() {
	cout << "\n=== Scientific Calculator ===" << endl;
    cout << "1. Basic Arithmetic" << endl;
    cout << "2. Trigonometric Functions" << endl;
    cout << "3. Logarithmic Functions" << endl;
    cout << "4. Exponential Functions" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1-5): ";
}

// Basic arithmetic functions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return std::numeric_limits<double>::quiet_NaN(); // Return NaN if division by zero
    }
    return a / b;
}

// Trigonometric functions
void trigonometricFunctions() {
