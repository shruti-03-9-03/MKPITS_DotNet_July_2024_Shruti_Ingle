#include<iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, n3, num;
    cout << "Enter number of elements: ";
    cin >> num;
    cout << n1 << " " << n2 << " ";
    for(int i = 2; i < num; i++) {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int acout, bcout, temp;
    cout << "Enter two numbers: ";
    cin >> acout>> bcout;
    temp = acout;
    acout = bcout;
    bcout = temp;
    cout << "After swapping: " << acout << " " << bcout;
    return 0;
}
