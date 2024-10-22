#include<iostream>
using namespace std;

int main() {
    float radius, area;
    cout << "Enter radius: ";
    cin >> radius;
    area = 3.14159 * radius * radius;
    cout << "Area of circle: " << area;
    return 0;
}
