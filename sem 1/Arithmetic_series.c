#include <stdio.h>

int main() {
    int a, d, n, term;
    printf("Enter the first term (a), common difference (d), and number of terms (n): ");
    scanf("%d %d %d", &a, &d, &n);

    for (int i = 0; i < n; i++) {
        term = a + i * d;
        printf("%d ", term);
    }
    printf("\n");
    
    return 0;
}
