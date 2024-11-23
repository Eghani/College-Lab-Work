#include <iostream>
using namespace std;

struct Data {
    int key, value;
};

int main() {
    Data arr[5] = {{3, 100}, {1, 200}, {4, 50}, {2, 300}, {5, 150}};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j].key > arr[j + 1].key) {
                Data temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i].key << " " << arr[i].value << endl;
    }
    return 0;
}