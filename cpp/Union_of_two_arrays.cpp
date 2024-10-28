#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of the first array:\n";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of the second array:\n";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int temp[n1 + n2];
    for (int i = 0; i < n1; i++) {
        temp[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        temp[n1 + i] = arr2[i];
    }

    int totalSize = n1 + n2;
    sort(temp, temp + totalSize);

    int unionSize = 0;
    for (int i = 0; i < totalSize; i++) {
        if (i == 0 || temp[i] != temp[i - 1]) {
            temp[unionSize++] = temp[i];
        }
    }

    cout << "Union of the two arrays: ";
    for (int i = 0; i < unionSize; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}
