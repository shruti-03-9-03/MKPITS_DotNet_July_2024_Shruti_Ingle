#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;

    for (int i = 0; i < binary.length(); i++) {
        if (binary[binary.length() - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }

    cout << "Decimal representation: " << decimal << endl;

    return 0;
}
