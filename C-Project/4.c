#include <stdio.h>

int main() {
    int rows = 6; // Total number of rows

    // Outer loop for each row
    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j < i; j++) {
            printf("   "); // 3 spaces for alignment
        }
        
        // Print numbers in the row
        for (int j = i; j <= rows; j++) {
            printf("%2d ", j); // Print numbers with space
        }
        
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
