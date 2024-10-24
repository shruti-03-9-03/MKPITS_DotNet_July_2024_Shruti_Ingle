#include <iostream>
using namespace std;

int main() {
    float kilometers, miles;
    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    miles = kilometers * 0.621371;
    cout << "Distance in miles: " << miles << endl;
    return 0;
}
