#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";
    for (int num = 2; num <= n; num++) {
        // Assume num is prime initially
        int i = 2;
        while (i <= num / 2) {
            if (num % i == 0) {
                // If num is divisible by i, it's not prime
                break;
            }
            i++;
        }
        // If the loop completes without breaking, num is prime
        if (i > num / 2) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
//prime Number upto n Numbers