#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        printf("Quotient: %d\n", a / b);
        printf("Remainder: %d\n", a % b);
    }
    
    return 0;
}
