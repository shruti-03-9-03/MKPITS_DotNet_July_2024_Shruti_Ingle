#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";

    string longestWord;
    while (cin >> input) {
        if (input.length() > longestWord.length()) {
            longestWord = input;
        }
    }

    cout << "The longest word is: " << longestWord << endl;

    return 0;
}
