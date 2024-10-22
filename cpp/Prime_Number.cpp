#include<iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> num;
    if(num <= 1)
        isPrime = false;
    for(icout = 2; icout <= num / 2; icout++) {
        if(num % icout == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime)
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";
    return 0;
}
