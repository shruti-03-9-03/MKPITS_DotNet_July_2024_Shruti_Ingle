#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    cout << "Concatenated String: " << str1 + str2 << endl;
    cout << "Length of first string: " << str1.length() << endl;
    cout << "Length of second string: " << str2.length() << endl;
    return 0;
}
