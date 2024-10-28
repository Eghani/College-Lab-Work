#include <iostream>
using namespace std;


void printArray(int* arr, int size) {
    int* ptr = arr;  
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": " << *(ptr + i) << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function to print the array using a pointer
    printArray(arr, size);

    return 0;
}