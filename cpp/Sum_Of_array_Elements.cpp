#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for(int icout = 0; icout < n; icout++) {
        cin >> arr[icout];
        sum += arr[icout];
    }
    cout << "Sum of array elements: " << sum;
    return 0;
}
