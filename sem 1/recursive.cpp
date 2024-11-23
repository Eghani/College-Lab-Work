#include <iostream>
using namespace std;

int power(int b, int e) {
    return e == 0 ? 1 : b * power(b, e - 1);
}

int main() {
    cout << power(2, 3) << endl;
    return 0;
}
