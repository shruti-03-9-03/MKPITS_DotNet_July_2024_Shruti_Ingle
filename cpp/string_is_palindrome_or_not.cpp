#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversed_str;
    
    cout << "Enter a string: ";
    cin >> str;
    
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed_str += str[i];
    }
    
    if (str == reversed_str)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}
//string is palindrome or not