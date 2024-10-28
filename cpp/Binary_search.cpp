#include <iostream>
using namespace std;

int main() {
    int size, target;
    cout << "Enter the size of the sorted array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target element to search: ";
    cin >> target;

    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            break; // Exit the loop if found
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (result != -1) {
        cout << "Element at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
