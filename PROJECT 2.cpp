#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Ask the user for input
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    // Swap the values using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display the swapped values
    cout << "\nAfter swapping:" << endl;
    cout << "First integer = " << a << endl;
    cout << "Second integer = " << b << endl;

    return 0;
}