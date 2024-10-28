#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Enter a real number: ");
    scanf("%f", &x);

    printf("tan(x): %.2f\n", tan(x));
    if (x > 0) {
        printf("log(x): %.2f\n", log(x));
    } else {
        printf("log(x) is not defined for non-positive values.\n");
    }
    if (x >= 0) {
        printf("Square root of x: %.2f\n", sqrt(x));
    } else {
        printf("Square root of a negative number is not real.\n");
    }

    return 0;
}
