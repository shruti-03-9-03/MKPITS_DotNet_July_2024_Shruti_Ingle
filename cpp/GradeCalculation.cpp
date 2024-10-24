#include <iostream>
using namespace std;

int main() {
    float marks;
    cout << "Enter marks obtained: ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A" << endl;
    else if (marks >= 75)
        cout << "Grade: B" << endl;
    else if (marks >= 50)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}
