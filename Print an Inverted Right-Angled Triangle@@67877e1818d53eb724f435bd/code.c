#include <stdio.h>

void printInvertedTriangle(int n) {
    // Loop for each row
    for (int i = 0; i < n; i++) {
        // Print spaces for each row
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars for each row
        for (int j = 0; j < (2 * (n - i) - 1); j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // Print the inverted triangle
    printInvertedTriangle(n);

    return 0;
}

