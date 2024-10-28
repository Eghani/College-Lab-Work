#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x;
    cout << "Enter a real number: ";
    cin >> x;

    cout << "tan(x): " << tan(x) << endl;
    if (x > 0) {
        cout << "log(x): " << log(x) << endl;
    } else {
        cout << "log(x) is not defined for non-positive values." << endl;
    }
    if (x >= 0) {
        cout << "Square root of x: " << sqrt(x) << endl;
    } else {
        cout << "Square root of a negative number is not real." << endl;
    }

    return 0;
}
