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
	double angle;
    cout << "\nEnter the angle in radians: ";
    cin >> angle;
    cout << fixed << setprecision(4);
    cout << "sin(" << angle << ") = " << sin(angle) << endl;
    cout << "cos(" << angle << ") = " << cos(angle) << endl;
    cout << "tan(" << angle << ") = " << tan(angle) << endl;
    cout << "asin(" << angle << ") = " << asin(angle) << " radians" << endl;
    cout << "acos(" << angle << ") = " << acos(angle) << " radians" << endl;
    cout << "atan(" << angle << ") = " << atan(angle) << " radians" << endl;
}

// Logarithmic functions
void logarithmicFunctions() {
	double number;
    cout << "\nEnter a number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Error: Logarithm is undefined for non-positive numbers!" << endl;
        return;
    }

    cout << fixed << setprecision(4);
    cout << "ln(" << number << ") = " << log(number) << endl;
    cout << "log10(" << number << ") = " << log10(number) << endl;
}

// Exponential functions
void exponentialFunctions() {
	double base, exponent;
    cout << "\nEnter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    cout << fixed << setprecision(4);
    cout << base << " raised to the power of " << exponent << " = " << pow(base, exponent) << endl;
    cout << "exp(" << exponent << ") = " << exp(exponent) << endl;
}

// Function to handle basic arithmetic
void basicArithmetic() {
	cout << "\nEnter first number: ";
    cin >> num1;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    cout << fixed << setprecision(4);
