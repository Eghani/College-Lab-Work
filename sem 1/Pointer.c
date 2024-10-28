#include <stdio.h>

void printArray(int* arr, int size) {
    int* ptr = arr;
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }
}

int main() {
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printArray(arr, size);

    return 0;
}
