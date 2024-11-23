#include <stdio.h>

struct Data {
    int key, value;
};

int main() {
    struct Data arr[5] = {{3, 100}, {1, 200}, {4, 50}, {2, 300}, {5, 150}};
    int i, j;
    struct Data temp;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (arr[j].key > arr[j + 1].key) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d %d\n", arr[i].key, arr[i].value);
    }

    return 0;
}
