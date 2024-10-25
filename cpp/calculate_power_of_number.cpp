#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    long long result = 1; // To hold the result

    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
//calculate power of number