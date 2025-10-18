#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, taxRate = 0.06, salesTax, totalAmount;

    // Ask the user for the total purchase amount
    cout << "Enter total purchase amount: ";
    cin >> purchaseAmount;

    // Calculate sales tax and total amount
    salesTax = purchaseAmount * taxRate;
    totalAmount = purchaseAmount + salesTax;

    // Display results
    cout << "Sales tax (6%) = " << salesTax << endl;
    cout << "Total amount with tax = " << totalAmount << endl;

    return 0;
}