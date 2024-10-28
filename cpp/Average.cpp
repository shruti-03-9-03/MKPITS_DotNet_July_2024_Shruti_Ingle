#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / size;
    cout << "Average in the array: " << average << endl;

    return 0;
}
