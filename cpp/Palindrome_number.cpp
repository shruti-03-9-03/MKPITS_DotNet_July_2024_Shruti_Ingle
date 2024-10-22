#include<iostream>
using namespace std;

int main() {
    int num, rev = 0, remainder, original;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while(num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }
    if(original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
