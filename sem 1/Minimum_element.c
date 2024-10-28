#include <stdio.h>
#include <limits.h>

// Function to find the minimum element
void minimum(int arr[], int size) {
    int mini = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }
    printf("The minimum element in the array is: %d\n", mini);
}

int main() {
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int arr[size];
    int count = 1;
    
    for (int i = 0; i < size; i++) {
        printf("Enter the %d Element of the array: \n", count);
        scanf("%d", &arr[i]);
        count++;
    }
    
    minimum(arr, size);
    
    return 0;
}
