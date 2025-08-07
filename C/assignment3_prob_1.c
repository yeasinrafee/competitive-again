#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Top half
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print pattern
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (i % 2 == 0)
                printf("-");
            else
                printf("#");
        }

        printf("\n");
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print pattern
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (i % 2 == 0)
                printf("-");
            else
                printf("#");
        }

        printf("\n");
    }

    return 0;
}
