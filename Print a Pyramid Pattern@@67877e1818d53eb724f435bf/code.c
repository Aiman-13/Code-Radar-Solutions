#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Get the number of rows for the pyramid

    for (int i = 1; i <= n; i++) {
        // Print spaces to center the stars in the pyramid
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars: (2 * i - 1) stars on row i
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
