#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {0}; // Declare and initialize the 3x3 matrix to zero

    // Filling the matrix with user-given values
    cout << "Enter 9 values for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Printing the matrix
    cout << "The 3x3 matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
