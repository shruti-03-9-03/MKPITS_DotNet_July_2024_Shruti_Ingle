#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for(int icout = 0; icout< n; icout++)
        cin >> arr[icout];
    int largest = arr[0];
    for(int icout = 1; icout < n; icout++) {
        if(arr[icout] > largest)
            largest = arr[icout];
    }
    cout << "Largest element: " << largest;
    return 0;
}
