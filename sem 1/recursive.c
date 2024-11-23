#include <stdio.h>

int power(int b, int e) {
    return e == 0 ? 1 : b * power(b, e - 1);
}

int main() {
    printf("%d\n", power(2, 3));
    return 0;
}
