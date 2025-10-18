#include <iostream>
using namespace std;
int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;
    double pi = 3.142;
    double area = r * r * pi;
    cout << "The area is = " << area;
    return 0;
}