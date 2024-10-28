#include <iostream>
using namespace std;

int main() {
    double base;
    int exponent;
    double result = 1.0;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    int positiveExponent = (exponent < 0) ? -exponent : exponent;

    for (int i = 0; i < positiveExponent; i++) {
        result *= base;
    }

    if (exponent < 0) {
        result = 1.0 / result;
    }

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
